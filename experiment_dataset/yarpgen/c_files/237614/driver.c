#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9375;
unsigned short var_1 = (unsigned short)21906;
unsigned int var_7 = 786699165U;
signed char var_8 = (signed char)-36;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_12 = (short)-8394;
short var_13 = (short)-18817;
_Bool var_14 = (_Bool)1;
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
