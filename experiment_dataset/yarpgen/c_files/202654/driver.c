#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
unsigned char var_2 = (unsigned char)14;
long long int var_5 = 2635100992378061430LL;
long long int var_7 = -8917860826840462881LL;
unsigned short var_8 = (unsigned short)35450;
short var_11 = (short)-20942;
unsigned long long int var_14 = 16506801880667713744ULL;
signed char var_15 = (signed char)84;
unsigned char var_17 = (unsigned char)127;
int zero = 0;
unsigned int var_20 = 3823538129U;
unsigned char var_21 = (unsigned char)37;
unsigned char var_22 = (unsigned char)221;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 975755749U;
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
