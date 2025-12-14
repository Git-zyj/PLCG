#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 869177724U;
unsigned int var_2 = 2953772558U;
unsigned short var_3 = (unsigned short)43427;
long long int var_4 = 280616543614996681LL;
unsigned int var_5 = 4229853207U;
int var_8 = 2041452124;
unsigned int var_10 = 2526891312U;
_Bool var_11 = (_Bool)0;
long long int var_12 = -4666025328829826696LL;
long long int var_13 = 6505701716341472455LL;
unsigned char var_14 = (unsigned char)174;
int zero = 0;
long long int var_16 = -6213742310644988160LL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)197;
int var_19 = -824426967;
long long int var_20 = 3088723847554803159LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
