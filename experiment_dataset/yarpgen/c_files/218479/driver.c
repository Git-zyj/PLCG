#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6186;
unsigned char var_3 = (unsigned char)124;
int var_4 = -292163320;
unsigned long long int var_8 = 13499233553779542171ULL;
unsigned int var_13 = 3554576745U;
unsigned short var_14 = (unsigned short)2918;
int var_15 = -1734987565;
int zero = 0;
unsigned int var_16 = 3467998995U;
short var_17 = (short)29555;
short var_18 = (short)-2889;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
