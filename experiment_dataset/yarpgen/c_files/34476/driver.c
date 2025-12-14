#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2447085793U;
long long int var_5 = -7213999926652711969LL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)62;
long long int var_13 = 4066826414700693870LL;
long long int var_14 = -6435695539214626729LL;
short var_15 = (short)28653;
long long int var_16 = -6506187606171082144LL;
int zero = 0;
unsigned int var_17 = 143911727U;
unsigned char var_18 = (unsigned char)45;
short var_19 = (short)-5698;
unsigned char var_20 = (unsigned char)112;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
