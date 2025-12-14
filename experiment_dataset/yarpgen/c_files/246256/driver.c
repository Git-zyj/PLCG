#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)76;
int var_8 = 891264286;
unsigned int var_9 = 1376703109U;
unsigned int var_10 = 4116263159U;
unsigned short var_13 = (unsigned short)2118;
unsigned short var_14 = (unsigned short)27687;
short var_18 = (short)-23780;
int zero = 0;
unsigned char var_19 = (unsigned char)90;
unsigned int var_20 = 3119532965U;
unsigned int var_21 = 2918609404U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
