#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 3596147469268316951LL;
_Bool var_2 = (_Bool)1;
short var_5 = (short)10408;
unsigned char var_6 = (unsigned char)174;
short var_9 = (short)-5371;
unsigned int var_10 = 307724202U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 3826005763754210253ULL;
long long int var_14 = 6186464918297365262LL;
unsigned char var_15 = (unsigned char)211;
unsigned char var_16 = (unsigned char)144;
int zero = 0;
unsigned char var_20 = (unsigned char)183;
_Bool var_21 = (_Bool)1;
short var_22 = (short)26159;
long long int var_23 = 6162435291826953619LL;
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
