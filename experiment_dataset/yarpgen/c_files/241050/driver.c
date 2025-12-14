#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 13793790224851228197ULL;
unsigned int var_12 = 730909682U;
unsigned int var_13 = 3789892614U;
short var_15 = (short)10560;
short var_17 = (short)-17594;
int zero = 0;
unsigned long long int var_18 = 947007349652382326ULL;
unsigned int var_19 = 2027557411U;
unsigned long long int var_20 = 370860440064807672ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
