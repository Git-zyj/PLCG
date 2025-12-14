#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10890545976708518471ULL;
_Bool var_6 = (_Bool)0;
short var_10 = (short)29900;
long long int var_11 = 7974917321605152841LL;
_Bool var_14 = (_Bool)1;
long long int var_16 = -1499266876130936404LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 810886071545130657LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
