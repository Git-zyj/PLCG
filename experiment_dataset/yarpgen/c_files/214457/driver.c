#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -4237810142346159147LL;
unsigned int var_4 = 1477313075U;
unsigned int var_7 = 1174364481U;
unsigned long long int var_8 = 2138799019236195816ULL;
int var_11 = -1674339341;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 4295078239776793261ULL;
short var_16 = (short)8731;
unsigned int var_17 = 1801201295U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
