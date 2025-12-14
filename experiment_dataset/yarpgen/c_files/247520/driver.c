#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -590784244;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)40491;
_Bool var_5 = (_Bool)0;
long long int var_6 = 2679074808974885515LL;
unsigned int var_7 = 1081054588U;
unsigned long long int var_8 = 7514502711558128040ULL;
long long int var_9 = -4461115159761087623LL;
long long int var_10 = 4882833924676590120LL;
unsigned char var_11 = (unsigned char)253;
signed char var_12 = (signed char)-30;
int zero = 0;
unsigned long long int var_13 = 748960905728498091ULL;
signed char var_14 = (signed char)-69;
signed char var_15 = (signed char)70;
unsigned int var_16 = 601547423U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
