#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
unsigned long long int var_8 = 14641508346153722690ULL;
unsigned char var_10 = (unsigned char)140;
unsigned int var_12 = 912482451U;
int zero = 0;
unsigned long long int var_14 = 12999534228755673937ULL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-9606;
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
