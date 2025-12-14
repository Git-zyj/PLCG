#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)224;
long long int var_2 = -31764346073671061LL;
int var_3 = 1685983056;
unsigned char var_5 = (unsigned char)238;
unsigned long long int var_8 = 14810722917199491675ULL;
int var_10 = -841043554;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
long long int var_15 = -3760700198408955318LL;
long long int var_17 = 4126873517321882431LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-125;
unsigned int var_21 = 1161424420U;
signed char var_22 = (signed char)35;
void init() {
}

void checksum() {
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
