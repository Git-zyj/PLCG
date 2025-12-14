#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5341672476179770642ULL;
_Bool var_1 = (_Bool)0;
long long int var_3 = 7601414793475583992LL;
int var_5 = 520478079;
long long int var_7 = -6736006574670200874LL;
int var_8 = -1721277290;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-13254;
_Bool var_12 = (_Bool)1;
int var_13 = 286838097;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)8064;
unsigned char var_17 = (unsigned char)31;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
