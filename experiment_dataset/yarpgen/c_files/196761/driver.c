#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10702789527118159466ULL;
_Bool var_5 = (_Bool)0;
long long int var_6 = -6284524247601359451LL;
unsigned int var_7 = 213050934U;
unsigned char var_15 = (unsigned char)48;
int zero = 0;
int var_16 = -1353801519;
long long int var_17 = -2481894896381992310LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
