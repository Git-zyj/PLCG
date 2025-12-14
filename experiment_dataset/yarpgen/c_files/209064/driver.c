#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22062;
unsigned int var_1 = 2516887738U;
int var_6 = -135867784;
long long int var_7 = -1466925899307834396LL;
short var_10 = (short)-15928;
unsigned long long int var_12 = 5081258424408556027ULL;
unsigned int var_13 = 1898560427U;
short var_14 = (short)5921;
unsigned long long int var_15 = 2428274311559156565ULL;
_Bool var_17 = (_Bool)1;
long long int var_18 = 3202290135936959012LL;
unsigned long long int var_19 = 18207254832080405000ULL;
int zero = 0;
unsigned long long int var_20 = 16441026461483173743ULL;
_Bool var_21 = (_Bool)0;
int var_22 = -2110956833;
unsigned char var_23 = (unsigned char)97;
short var_24 = (short)9304;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
