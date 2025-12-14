#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8203746902148037258LL;
_Bool var_2 = (_Bool)0;
unsigned int var_5 = 1820149632U;
unsigned int var_7 = 3554522000U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 9029895842982925367ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 364811866U;
unsigned int var_16 = 3175827989U;
unsigned short var_17 = (unsigned short)45938;
unsigned int var_18 = 3328302863U;
unsigned int var_19 = 1151646371U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
