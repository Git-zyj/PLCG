#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1681221707U;
unsigned short var_2 = (unsigned short)11522;
unsigned int var_6 = 2708083344U;
unsigned int var_12 = 3532968517U;
_Bool var_13 = (_Bool)0;
long long int var_14 = -1488230415100785633LL;
short var_16 = (short)-28509;
short var_17 = (short)18029;
int zero = 0;
unsigned int var_18 = 504278879U;
int var_19 = -1314015830;
long long int var_20 = 7571233274880472915LL;
signed char var_21 = (signed char)-65;
short var_22 = (short)-4589;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
