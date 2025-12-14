#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1710241603336029190ULL;
short var_5 = (short)-5352;
unsigned char var_10 = (unsigned char)70;
unsigned long long int var_12 = 60136066978769264ULL;
short var_13 = (short)21597;
unsigned long long int var_14 = 13588339655212588623ULL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-29946;
int zero = 0;
unsigned int var_18 = 315600205U;
long long int var_19 = 8821279930333873593LL;
short var_20 = (short)28885;
signed char var_21 = (signed char)-97;
long long int var_22 = 6635418561360536132LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
