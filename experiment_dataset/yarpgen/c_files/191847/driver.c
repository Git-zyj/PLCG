#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)51;
unsigned char var_5 = (unsigned char)255;
unsigned int var_6 = 973255817U;
signed char var_8 = (signed char)81;
unsigned int var_16 = 2244786504U;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 4140421737U;
unsigned char var_21 = (unsigned char)132;
unsigned char var_22 = (unsigned char)217;
unsigned int var_23 = 2774551430U;
unsigned int var_24 = 3947729166U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
