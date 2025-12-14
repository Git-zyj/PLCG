#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -173360769;
int var_1 = 1073971261;
unsigned short var_5 = (unsigned short)2491;
unsigned char var_8 = (unsigned char)55;
_Bool var_10 = (_Bool)0;
int var_15 = -794268607;
int zero = 0;
signed char var_20 = (signed char)71;
short var_21 = (short)5532;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
