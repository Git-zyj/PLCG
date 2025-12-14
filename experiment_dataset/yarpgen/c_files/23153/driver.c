#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7822920018601729067LL;
signed char var_3 = (signed char)-15;
int var_5 = -793813905;
unsigned int var_6 = 582775673U;
unsigned int var_7 = 3483227127U;
int var_9 = -138700852;
unsigned long long int var_13 = 15898398228896095344ULL;
unsigned long long int var_14 = 5812346460628387720ULL;
int zero = 0;
short var_15 = (short)7337;
short var_16 = (short)28409;
unsigned char var_17 = (unsigned char)244;
void init() {
}

void checksum() {
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
