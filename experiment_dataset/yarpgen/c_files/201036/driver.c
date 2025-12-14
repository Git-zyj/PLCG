#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)66;
unsigned char var_8 = (unsigned char)0;
_Bool var_10 = (_Bool)1;
unsigned short var_14 = (unsigned short)47143;
unsigned int var_15 = 3129623545U;
int zero = 0;
unsigned char var_16 = (unsigned char)187;
unsigned char var_17 = (unsigned char)245;
unsigned char var_18 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
