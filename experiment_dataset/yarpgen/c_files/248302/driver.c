#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3409011701095679782LL;
unsigned char var_5 = (unsigned char)18;
short var_11 = (short)28362;
int var_12 = 1801741513;
unsigned char var_14 = (unsigned char)197;
int zero = 0;
signed char var_15 = (signed char)11;
unsigned int var_16 = 136159167U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
