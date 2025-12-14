#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1683985750;
unsigned char var_2 = (unsigned char)169;
long long int var_10 = 3022417967447929218LL;
int zero = 0;
unsigned char var_11 = (unsigned char)58;
unsigned char var_12 = (unsigned char)48;
unsigned char var_13 = (unsigned char)95;
long long int var_14 = -3953165420278413119LL;
unsigned long long int var_15 = 11566820610647672824ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
