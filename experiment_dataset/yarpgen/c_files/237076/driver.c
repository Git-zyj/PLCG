#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3417788532849359853ULL;
short var_7 = (short)6636;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)187;
int zero = 0;
unsigned int var_19 = 3025382802U;
unsigned int var_20 = 1707415270U;
long long int var_21 = 7188386031070200239LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
