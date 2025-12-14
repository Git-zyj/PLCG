#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_6 = 15170671324284288392ULL;
unsigned long long int var_13 = 17621768886277464004ULL;
unsigned long long int var_15 = 6795096399431971347ULL;
unsigned short var_16 = (unsigned short)56580;
unsigned int var_17 = 2376612611U;
int zero = 0;
unsigned int var_19 = 4149353733U;
unsigned int var_20 = 417710754U;
unsigned int var_21 = 1381479897U;
void init() {
}

void checksum() {
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
