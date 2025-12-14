#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1619935818;
int var_4 = 2017621889;
unsigned char var_7 = (unsigned char)159;
unsigned int var_8 = 4206107991U;
int var_9 = 977002500;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)244;
int zero = 0;
unsigned int var_15 = 1985583783U;
_Bool var_16 = (_Bool)0;
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
