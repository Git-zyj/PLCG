#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)1023;
signed char var_2 = (signed char)3;
unsigned int var_3 = 4078370271U;
long long int var_4 = 3322783248824313998LL;
long long int var_6 = 2975111708223221240LL;
unsigned short var_11 = (unsigned short)13500;
signed char var_13 = (signed char)42;
int zero = 0;
signed char var_14 = (signed char)-124;
signed char var_15 = (signed char)48;
unsigned long long int var_16 = 12400509004144954040ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
