#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1467539283;
unsigned int var_2 = 2331322280U;
long long int var_7 = -713817043976232185LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3674089692U;
int var_12 = 1728016089;
int var_13 = 400762651;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
