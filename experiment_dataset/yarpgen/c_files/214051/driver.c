#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4663653789036499854ULL;
long long int var_4 = -8248564814673969335LL;
int var_6 = 53971159;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 256591449U;
long long int var_11 = -5460743501348216410LL;
short var_13 = (short)-26357;
unsigned short var_14 = (unsigned short)7293;
int var_15 = -518835224;
unsigned long long int var_16 = 2058531996346296642ULL;
long long int var_18 = -4778783255849598587LL;
int zero = 0;
signed char var_19 = (signed char)74;
unsigned long long int var_20 = 6714924438314340880ULL;
long long int var_21 = 3974468589024969728LL;
short var_22 = (short)-3192;
unsigned char var_23 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
