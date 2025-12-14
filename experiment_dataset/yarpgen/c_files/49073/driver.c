#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11060294735449954430ULL;
unsigned short var_3 = (unsigned short)40429;
short var_5 = (short)-15145;
unsigned long long int var_8 = 15068838627422730261ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_12 = (short)-19128;
short var_13 = (short)-16835;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)5472;
short var_16 = (short)-1047;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
