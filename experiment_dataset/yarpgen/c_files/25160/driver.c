#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
unsigned int var_3 = 3008453059U;
unsigned int var_5 = 1534905189U;
long long int var_6 = 3777012013148560042LL;
unsigned long long int var_9 = 9053518758418992380ULL;
int zero = 0;
signed char var_11 = (signed char)79;
int var_12 = 1679025888;
int var_13 = 1657168972;
unsigned short var_14 = (unsigned short)37287;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
