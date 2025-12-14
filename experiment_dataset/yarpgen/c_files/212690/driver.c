#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 259723962;
signed char var_3 = (signed char)66;
long long int var_5 = -6508116224499389790LL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_8 = 1683055158;
long long int var_10 = 3855852469733285637LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = -1962547997812569414LL;
signed char var_15 = (signed char)-52;
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
