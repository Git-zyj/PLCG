#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)252;
unsigned int var_2 = 2711862365U;
unsigned long long int var_3 = 17946075513811080933ULL;
short var_4 = (short)7213;
unsigned int var_5 = 935721416U;
unsigned short var_7 = (unsigned short)13264;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3953980935U;
_Bool var_10 = (_Bool)1;
long long int var_11 = -8207539699241540498LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 2363154757U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 11794536735535603682ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
