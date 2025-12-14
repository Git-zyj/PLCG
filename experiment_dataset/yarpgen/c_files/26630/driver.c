#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 52660822055662189ULL;
signed char var_8 = (signed char)34;
unsigned int var_9 = 1612239478U;
long long int var_10 = 3152747693067249364LL;
int zero = 0;
long long int var_13 = -8104620643881310878LL;
unsigned short var_14 = (unsigned short)63754;
unsigned int var_15 = 3294253848U;
unsigned int var_16 = 3118300845U;
signed char var_17 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
