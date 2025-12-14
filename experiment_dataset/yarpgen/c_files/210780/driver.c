#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38686;
short var_5 = (short)-8011;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3956627767U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)239;
int var_17 = 1345195373;
short var_18 = (short)-32174;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
