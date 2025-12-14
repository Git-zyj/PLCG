#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3662933446U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2926144787U;
unsigned long long int var_14 = 11097773113100465542ULL;
unsigned long long int var_15 = 5583588794688258661ULL;
void init() {
}

void checksum() {
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
