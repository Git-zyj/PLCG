#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2907683218088116617LL;
short var_3 = (short)-13427;
unsigned long long int var_5 = 7212011390734182304ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1543965900U;
int var_11 = -1476910496;
int var_12 = 1566741392;
unsigned long long int var_13 = 1726746427940875600ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 8919714839591661166ULL;
long long int var_17 = 1053351720284208128LL;
unsigned short var_18 = (unsigned short)22469;
int zero = 0;
short var_20 = (short)-8338;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-30840;
unsigned char var_23 = (unsigned char)244;
long long int var_24 = -6482084728585352129LL;
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
