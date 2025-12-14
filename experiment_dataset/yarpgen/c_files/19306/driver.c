#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -233019662;
unsigned int var_3 = 1381162988U;
unsigned long long int var_6 = 9075888400243489722ULL;
long long int var_8 = -5347414747568912398LL;
long long int var_9 = 2331298749932731195LL;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 1412883049U;
int zero = 0;
unsigned long long int var_18 = 13922982252297425148ULL;
signed char var_19 = (signed char)23;
unsigned int var_20 = 1931444480U;
unsigned int var_21 = 4081396978U;
short var_22 = (short)2655;
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
