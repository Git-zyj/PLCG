#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1395346486;
int var_4 = -1234500825;
_Bool var_8 = (_Bool)0;
int var_12 = 677619344;
int zero = 0;
int var_14 = -1412171767;
short var_15 = (short)4311;
_Bool var_16 = (_Bool)0;
int var_17 = -348621268;
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
