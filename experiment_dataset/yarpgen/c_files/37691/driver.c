#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-92;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)104;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)24;
unsigned char var_15 = (unsigned char)88;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
