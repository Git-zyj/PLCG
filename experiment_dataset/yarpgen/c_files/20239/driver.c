#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_5 = 56016823U;
short var_6 = (short)-30190;
long long int var_9 = 1818182173880515080LL;
unsigned short var_11 = (unsigned short)15483;
unsigned short var_12 = (unsigned short)6681;
int var_13 = 2102421925;
unsigned short var_14 = (unsigned short)47527;
_Bool var_16 = (_Bool)0;
unsigned int var_18 = 3251478732U;
int zero = 0;
int var_19 = 1780127253;
long long int var_20 = 3216854809499231265LL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 18013403423687923156ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
