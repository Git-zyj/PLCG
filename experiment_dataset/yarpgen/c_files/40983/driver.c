#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5733119610236728240ULL;
signed char var_5 = (signed char)112;
unsigned short var_7 = (unsigned short)12601;
unsigned char var_8 = (unsigned char)178;
unsigned short var_11 = (unsigned short)13174;
long long int var_18 = -6861569626744772970LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)28981;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
