#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_4 = 750448617U;
unsigned char var_7 = (unsigned char)173;
unsigned int var_12 = 413855726U;
int var_15 = -2044033058;
int zero = 0;
unsigned long long int var_16 = 18173037010527533309ULL;
unsigned long long int var_17 = 10941935880085631889ULL;
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
