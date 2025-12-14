#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3831401370U;
_Bool var_1 = (_Bool)0;
unsigned int var_4 = 3033520986U;
long long int var_6 = -1552429814050503333LL;
int var_10 = -2032483733;
short var_11 = (short)22771;
int zero = 0;
short var_12 = (short)-17783;
short var_13 = (short)-5709;
unsigned short var_14 = (unsigned short)54480;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
