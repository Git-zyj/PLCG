#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8549427567497233651ULL;
unsigned long long int var_4 = 6883232967250306842ULL;
short var_6 = (short)290;
_Bool var_8 = (_Bool)1;
int var_11 = 1081892393;
short var_12 = (short)12271;
long long int var_13 = -343911478912507378LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 109042513U;
unsigned long long int var_19 = 16600677752989727309ULL;
long long int var_20 = -8428346294304875930LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
