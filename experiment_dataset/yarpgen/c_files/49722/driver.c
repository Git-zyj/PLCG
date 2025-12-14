#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)78;
_Bool var_8 = (_Bool)1;
short var_9 = (short)23001;
signed char var_15 = (signed char)-92;
signed char var_16 = (signed char)80;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1446816137U;
unsigned int var_22 = 1673714362U;
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
