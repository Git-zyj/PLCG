#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7245545726362631256LL;
long long int var_7 = 6935329473656890575LL;
signed char var_9 = (signed char)-23;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)45;
signed char var_17 = (signed char)-66;
int zero = 0;
unsigned long long int var_20 = 3753427177432751556ULL;
unsigned int var_21 = 3636214237U;
unsigned short var_22 = (unsigned short)982;
unsigned int var_23 = 1160108926U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
