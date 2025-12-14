#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
int var_2 = -27132814;
_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 1950812177184726215ULL;
int var_9 = 239502496;
signed char var_10 = (signed char)-54;
long long int var_12 = -3430034542808906922LL;
int var_14 = 1151726198;
int zero = 0;
unsigned short var_15 = (unsigned short)43571;
short var_16 = (short)-17271;
unsigned long long int var_17 = 2795850735941736557ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
