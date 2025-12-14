#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1866459077U;
unsigned int var_15 = 3045357542U;
unsigned long long int var_17 = 11427512910142819113ULL;
unsigned char var_18 = (unsigned char)248;
int zero = 0;
unsigned char var_20 = (unsigned char)5;
unsigned long long int var_21 = 6441583779579571401ULL;
long long int var_22 = 649400122602613915LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
