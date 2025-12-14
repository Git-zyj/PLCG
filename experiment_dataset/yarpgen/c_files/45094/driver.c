#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11049;
unsigned int var_2 = 3405577407U;
long long int var_5 = -3925344005862145918LL;
unsigned short var_6 = (unsigned short)57504;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 2320368255U;
int zero = 0;
unsigned short var_14 = (unsigned short)48380;
unsigned int var_15 = 880672040U;
unsigned long long int var_16 = 15499115227648485713ULL;
unsigned short var_17 = (unsigned short)8510;
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
