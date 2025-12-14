#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2410965058U;
short var_5 = (short)-9556;
short var_6 = (short)-28045;
_Bool var_8 = (_Bool)1;
int var_11 = -1482647522;
int var_12 = 1547914416;
int zero = 0;
unsigned char var_16 = (unsigned char)103;
int var_17 = -1808994039;
unsigned short var_18 = (unsigned short)46941;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
