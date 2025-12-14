#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7621502751528222393LL;
long long int var_1 = 6549697354565553860LL;
signed char var_2 = (signed char)56;
unsigned long long int var_10 = 2871484602469445006ULL;
long long int var_13 = -4833076255196877641LL;
unsigned long long int var_14 = 5915060007637984546ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-48;
signed char var_17 = (signed char)-66;
unsigned int var_18 = 886454399U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
