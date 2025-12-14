#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-17579;
unsigned short var_7 = (unsigned short)22278;
unsigned long long int var_10 = 16963104694675567106ULL;
long long int var_12 = -3012964626624432517LL;
unsigned int var_13 = 1640764652U;
unsigned long long int var_14 = 4508107582786235142ULL;
int zero = 0;
short var_17 = (short)1337;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-31324;
_Bool var_20 = (_Bool)1;
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
