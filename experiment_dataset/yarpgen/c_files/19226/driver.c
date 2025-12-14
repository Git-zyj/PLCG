#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
unsigned int var_1 = 1591530544U;
unsigned char var_3 = (unsigned char)192;
int var_4 = -574195674;
unsigned long long int var_6 = 2610918947429648371ULL;
unsigned char var_7 = (unsigned char)190;
unsigned short var_8 = (unsigned short)43697;
int zero = 0;
unsigned char var_11 = (unsigned char)105;
unsigned char var_12 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
