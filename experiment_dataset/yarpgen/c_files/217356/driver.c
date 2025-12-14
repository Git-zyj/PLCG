#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = 1091330065676481322LL;
_Bool var_5 = (_Bool)1;
short var_10 = (short)-6333;
int zero = 0;
signed char var_12 = (signed char)-119;
short var_13 = (short)-443;
unsigned long long int var_14 = 9532271632321197000ULL;
long long int var_15 = -3685841696869843147LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
