#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3704785626443120063LL;
int zero = 0;
short var_12 = (short)19730;
short var_13 = (short)17561;
unsigned short var_14 = (unsigned short)6543;
short var_15 = (short)-20024;
long long int var_16 = -2683467517399607063LL;
long long int var_17 = 1812385419776696928LL;
short var_18 = (short)-1559;
_Bool var_19 = (_Bool)1;
int var_20 = 505095542;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-10840;
unsigned short var_23 = (unsigned short)15976;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
