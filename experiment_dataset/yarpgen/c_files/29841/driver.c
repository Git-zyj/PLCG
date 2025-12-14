#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3390736850U;
short var_3 = (short)7601;
int var_6 = 1447968347;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 2037150478U;
unsigned short var_12 = (unsigned short)318;
int zero = 0;
short var_14 = (short)29001;
long long int var_15 = -340767724054649576LL;
unsigned int var_16 = 3033408447U;
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
