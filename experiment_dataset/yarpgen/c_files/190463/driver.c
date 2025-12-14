#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)19;
_Bool var_3 = (_Bool)0;
short var_7 = (short)11742;
short var_10 = (short)-777;
unsigned long long int var_12 = 14406829679775011748ULL;
unsigned short var_13 = (unsigned short)18987;
int zero = 0;
unsigned long long int var_14 = 14502909846323553210ULL;
int var_15 = -1901338820;
signed char var_16 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
