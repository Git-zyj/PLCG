#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)84;
unsigned long long int var_3 = 3254981618015965691ULL;
unsigned long long int var_4 = 14313279854791451723ULL;
unsigned short var_5 = (unsigned short)4877;
unsigned char var_7 = (unsigned char)231;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)59;
long long int var_11 = -4895878780238078992LL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)20184;
unsigned char var_15 = (unsigned char)81;
unsigned char var_16 = (unsigned char)45;
unsigned int var_17 = 551604187U;
int zero = 0;
unsigned char var_19 = (unsigned char)72;
unsigned short var_20 = (unsigned short)35532;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)15;
unsigned char var_23 = (unsigned char)181;
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
