#include <stdio.h>

int main() {
    int decimal, binary = 0, i = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        remainder = decimal % 2;
        binary = binary + remainder * i;
        decimal /= 2;
        i *= 10;
    }

    printf("Binary equivalent: %d", binary);
    printf("\n");

    return 0;
}