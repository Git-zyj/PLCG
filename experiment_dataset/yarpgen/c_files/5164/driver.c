#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14811613322306928884ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 10193574063774405813ULL;
int zero = 0;
unsigned int var_10 = 139580031U;
int var_11 = 1777298187;
unsigned int var_12 = 2201167138U;
_Bool var_13 = (_Bool)1;
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
