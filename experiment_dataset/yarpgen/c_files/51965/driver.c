#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1470908381U;
short var_7 = (short)-13753;
unsigned int var_13 = 3539986704U;
int zero = 0;
unsigned long long int var_15 = 5472238897237040319ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-10230;
unsigned short var_18 = (unsigned short)29021;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
