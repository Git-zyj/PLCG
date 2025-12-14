#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12985877579561853867ULL;
unsigned int var_4 = 1782668480U;
short var_6 = (short)-2894;
int var_13 = 54548601;
unsigned int var_14 = 21495634U;
int zero = 0;
unsigned char var_15 = (unsigned char)120;
unsigned short var_16 = (unsigned short)27627;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
