#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35416;
unsigned char var_6 = (unsigned char)205;
unsigned long long int var_7 = 16930992240170492758ULL;
unsigned long long int var_14 = 212565039075965144ULL;
unsigned int var_15 = 103071693U;
unsigned long long int var_18 = 7058856590913597888ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)17419;
short var_20 = (short)-11232;
short var_21 = (short)16372;
short var_22 = (short)32668;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
