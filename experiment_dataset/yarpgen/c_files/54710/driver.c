#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23851;
short var_13 = (short)24412;
signed char var_19 = (signed char)-80;
int zero = 0;
int var_20 = -1136239238;
unsigned int var_21 = 4284309383U;
int var_22 = 1688443884;
long long int var_23 = -7447939305110739774LL;
unsigned long long int var_24 = 7408332210836162336ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
