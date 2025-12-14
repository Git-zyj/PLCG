#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 4162151536202086238ULL;
unsigned int var_5 = 3689089264U;
long long int var_7 = 8876749777104897289LL;
int zero = 0;
signed char var_12 = (signed char)24;
unsigned long long int var_13 = 13152440183686405421ULL;
signed char var_14 = (signed char)-66;
void init() {
}

void checksum() {
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
