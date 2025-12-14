#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18833;
unsigned short var_4 = (unsigned short)47997;
_Bool var_5 = (_Bool)0;
int var_10 = 1237174557;
int var_11 = 244392890;
short var_12 = (short)-4629;
int var_16 = 1265997987;
int zero = 0;
unsigned int var_19 = 4130862821U;
unsigned int var_20 = 2560381620U;
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
