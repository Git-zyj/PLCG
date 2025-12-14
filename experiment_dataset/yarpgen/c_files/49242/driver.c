#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3171331621U;
int var_8 = -937935395;
unsigned long long int var_9 = 8991542255250585668ULL;
_Bool var_12 = (_Bool)0;
int var_13 = -1466779157;
signed char var_16 = (signed char)61;
int zero = 0;
unsigned char var_20 = (unsigned char)160;
unsigned int var_21 = 1211622487U;
void init() {
}

void checksum() {
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
