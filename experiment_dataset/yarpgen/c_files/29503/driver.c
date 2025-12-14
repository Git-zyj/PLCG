#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 2239813811U;
unsigned int var_6 = 1026549828U;
int var_10 = 2086736006;
long long int var_13 = 6284840926551865857LL;
int zero = 0;
int var_14 = 1281659296;
unsigned int var_15 = 1498688829U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
