#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 866219808U;
unsigned int var_3 = 98621710U;
long long int var_4 = -6952660277622021813LL;
unsigned int var_5 = 143709720U;
unsigned long long int var_8 = 18176301901946057384ULL;
unsigned char var_10 = (unsigned char)55;
long long int var_13 = 681666170301366241LL;
short var_14 = (short)30445;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 5403416641611425387ULL;
unsigned char var_17 = (unsigned char)190;
short var_18 = (short)-3100;
unsigned int var_19 = 1128186012U;
long long int var_20 = 841246007125221376LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
