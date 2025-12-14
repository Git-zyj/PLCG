#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -441729389;
int var_6 = 1688656263;
unsigned int var_9 = 2156242587U;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-12969;
int var_16 = 398843462;
unsigned int var_17 = 880550924U;
signed char var_18 = (signed char)61;
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
