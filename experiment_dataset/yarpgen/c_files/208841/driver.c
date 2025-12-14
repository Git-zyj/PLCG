#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
int var_2 = 836826129;
short var_9 = (short)14010;
unsigned int var_10 = 2264576870U;
unsigned int var_12 = 1751402242U;
long long int var_15 = -8089835635853680042LL;
unsigned int var_16 = 1860083913U;
unsigned short var_18 = (unsigned short)60433;
int zero = 0;
int var_19 = 1287470744;
short var_20 = (short)-3951;
unsigned int var_21 = 3428195497U;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-2530;
void init() {
}

void checksum() {
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
