#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 4665163627462907135ULL;
short var_5 = (short)-20832;
int var_7 = 246520533;
short var_16 = (short)-15805;
unsigned long long int var_17 = 10690258776663171866ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)-23804;
int var_21 = -1125861782;
unsigned short var_22 = (unsigned short)45533;
long long int var_23 = 4041317012404845836LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
