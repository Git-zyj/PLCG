#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)44356;
long long int var_7 = 2498984398984047983LL;
int zero = 0;
unsigned short var_13 = (unsigned short)19049;
unsigned int var_14 = 1471974774U;
unsigned char var_15 = (unsigned char)218;
unsigned long long int var_16 = 2099354745844544132ULL;
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
