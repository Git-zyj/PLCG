#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2496213822U;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)21661;
int var_9 = 1576768882;
unsigned char var_10 = (unsigned char)87;
short var_11 = (short)-16260;
long long int var_12 = -7119223993557735040LL;
int zero = 0;
long long int var_13 = -1789888187211779666LL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1824427692U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
