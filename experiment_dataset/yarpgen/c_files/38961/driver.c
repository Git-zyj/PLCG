#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1798483720U;
unsigned int var_6 = 3807170356U;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1151606593U;
unsigned long long int var_17 = 8915599412382236004ULL;
int zero = 0;
unsigned int var_18 = 735610156U;
unsigned int var_19 = 2133411435U;
long long int var_20 = 397483516316952853LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
