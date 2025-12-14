#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -533781725;
int var_5 = -805169647;
unsigned long long int var_7 = 1260705391597286222ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_14 = (unsigned char)101;
unsigned int var_15 = 3722952771U;
long long int var_18 = 1663215473796654783LL;
int zero = 0;
unsigned int var_20 = 731004353U;
signed char var_21 = (signed char)-66;
short var_22 = (short)-357;
signed char var_23 = (signed char)-15;
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
