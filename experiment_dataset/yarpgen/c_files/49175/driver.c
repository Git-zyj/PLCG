#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 484170814;
short var_5 = (short)1255;
signed char var_7 = (signed char)67;
int var_15 = -1566103929;
unsigned long long int var_16 = 11862511601413994304ULL;
int zero = 0;
unsigned int var_19 = 2410905368U;
int var_20 = 2074884238;
unsigned short var_21 = (unsigned short)32049;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
