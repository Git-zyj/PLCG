#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59255;
unsigned short var_4 = (unsigned short)48592;
unsigned short var_5 = (unsigned short)35343;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)234;
unsigned long long int var_16 = 15597605545538233832ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)36305;
long long int var_21 = -6585396191179659687LL;
signed char var_22 = (signed char)-95;
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
