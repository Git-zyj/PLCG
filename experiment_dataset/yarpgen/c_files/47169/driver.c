#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_6 = 2291538679394068393LL;
long long int var_13 = -1262539594843189829LL;
unsigned long long int var_16 = 1412767414526032302ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = 2101716488;
signed char var_19 = (signed char)17;
long long int var_20 = -51322320947999211LL;
unsigned int var_21 = 1505736456U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
