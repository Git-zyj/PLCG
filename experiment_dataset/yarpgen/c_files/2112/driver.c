#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1361017362U;
signed char var_8 = (signed char)6;
unsigned short var_10 = (unsigned short)64987;
unsigned long long int var_11 = 3066013607292071243ULL;
short var_12 = (short)17155;
unsigned int var_13 = 3673170651U;
unsigned long long int var_15 = 10076965780171360895ULL;
long long int var_17 = 6038421370660218446LL;
int zero = 0;
unsigned int var_18 = 2572019729U;
signed char var_19 = (signed char)35;
long long int var_20 = 5922059902562690828LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = 4322198351647046292LL;
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
