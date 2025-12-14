#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3372022709U;
_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)87;
unsigned int var_8 = 3456864399U;
int zero = 0;
unsigned char var_11 = (unsigned char)130;
long long int var_12 = -8794651301197645618LL;
int var_13 = 768933336;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
