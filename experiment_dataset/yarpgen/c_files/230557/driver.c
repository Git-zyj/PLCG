#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1662539253U;
unsigned int var_1 = 3244278048U;
unsigned short var_2 = (unsigned short)1100;
unsigned int var_5 = 178014860U;
unsigned short var_6 = (unsigned short)48260;
unsigned int var_10 = 931897177U;
unsigned int var_12 = 3447352458U;
unsigned int var_13 = 4053039260U;
unsigned int var_15 = 635503778U;
int zero = 0;
unsigned int var_17 = 139644983U;
unsigned int var_18 = 3598511244U;
unsigned short var_19 = (unsigned short)52564;
unsigned short var_20 = (unsigned short)59899;
unsigned short var_21 = (unsigned short)40047;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
