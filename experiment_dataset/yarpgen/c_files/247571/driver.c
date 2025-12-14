#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned long long int var_11 = 13799925260123672116ULL;
unsigned long long int var_12 = 11681741063280755110ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 840586070;
void init() {
}

void checksum() {
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
