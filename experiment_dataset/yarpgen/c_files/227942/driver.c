#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-4;
unsigned int var_6 = 3557750809U;
unsigned char var_7 = (unsigned char)48;
signed char var_11 = (signed char)55;
signed char var_12 = (signed char)-89;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3380030947U;
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
