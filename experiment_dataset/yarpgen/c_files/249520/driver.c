#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12749120667429163948ULL;
unsigned int var_3 = 715975156U;
int var_4 = -1823122624;
int var_5 = 108200239;
unsigned char var_7 = (unsigned char)245;
long long int var_11 = 7213485148400388048LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)37;
short var_15 = (short)21058;
int var_16 = 310893241;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
