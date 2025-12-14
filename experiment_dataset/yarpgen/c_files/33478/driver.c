#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8796;
long long int var_6 = -2873950567658199458LL;
signed char var_7 = (signed char)-109;
unsigned short var_9 = (unsigned short)62598;
int var_10 = -1408049224;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 159420693U;
unsigned int var_16 = 3589243557U;
_Bool var_17 = (_Bool)1;
long long int var_18 = -8824334369850660473LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
