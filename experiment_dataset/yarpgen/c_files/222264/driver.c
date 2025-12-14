#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32112;
unsigned int var_1 = 3695288237U;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)20205;
int var_8 = 1564431565;
int var_10 = -2111091702;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 7811832517413161248ULL;
unsigned short var_13 = (unsigned short)56571;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
