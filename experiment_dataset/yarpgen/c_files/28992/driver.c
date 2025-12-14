#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9748180333673696185ULL;
unsigned int var_2 = 848870103U;
_Bool var_5 = (_Bool)0;
unsigned char var_12 = (unsigned char)8;
unsigned short var_13 = (unsigned short)36484;
int zero = 0;
signed char var_14 = (signed char)14;
int var_15 = 1786070330;
signed char var_16 = (signed char)4;
unsigned int var_17 = 114676634U;
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
