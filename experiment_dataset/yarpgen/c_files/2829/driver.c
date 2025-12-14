#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)150;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_12 = 2890359003140455701LL;
unsigned char var_13 = (unsigned char)231;
_Bool var_14 = (_Bool)1;
long long int var_15 = -1895428449506946131LL;
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
