#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10441;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 2097523925U;
unsigned int var_14 = 3493420479U;
int zero = 0;
unsigned short var_20 = (unsigned short)16112;
unsigned short var_21 = (unsigned short)10763;
unsigned int var_22 = 3038222021U;
void init() {
}

void checksum() {
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
