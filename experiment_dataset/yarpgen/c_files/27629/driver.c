#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1273974403U;
_Bool var_3 = (_Bool)1;
unsigned long long int var_8 = 1154882802766841170ULL;
unsigned int var_11 = 316496398U;
int zero = 0;
unsigned short var_14 = (unsigned short)35862;
long long int var_15 = -8137490346054168432LL;
void init() {
}

void checksum() {
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
