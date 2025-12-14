#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -825479132;
short var_5 = (short)22733;
signed char var_6 = (signed char)57;
unsigned long long int var_7 = 12426178804272413153ULL;
short var_8 = (short)2774;
signed char var_9 = (signed char)26;
int var_10 = -104603607;
signed char var_11 = (signed char)-30;
signed char var_12 = (signed char)-102;
unsigned int var_14 = 1818110819U;
unsigned short var_15 = (unsigned short)30289;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3506754643U;
int var_18 = 2092574616;
unsigned int var_19 = 1556966349U;
void init() {
}

void checksum() {
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
