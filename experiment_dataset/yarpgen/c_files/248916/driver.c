#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1592614761;
short var_2 = (short)-31970;
signed char var_7 = (signed char)87;
long long int var_10 = 6886189983370124914LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 279243817;
unsigned int var_16 = 114060708U;
short var_17 = (short)-13702;
unsigned int var_18 = 3930816624U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
