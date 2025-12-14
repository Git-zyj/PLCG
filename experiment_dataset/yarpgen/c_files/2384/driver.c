#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_7 = 15064762219308566089ULL;
unsigned long long int var_9 = 18234884133907745412ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 1688429111631920142ULL;
unsigned int var_12 = 1671068921U;
int var_13 = 303892760;
unsigned int var_14 = 3503705121U;
int var_15 = -1331227411;
int var_17 = 1224104472;
long long int var_18 = -7675639762468685021LL;
int zero = 0;
unsigned long long int var_19 = 13065353662387053275ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
