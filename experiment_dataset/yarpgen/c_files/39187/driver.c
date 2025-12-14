#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6579165288539132820LL;
int var_7 = -415698855;
long long int var_9 = 5029282382107532265LL;
unsigned short var_10 = (unsigned short)27547;
_Bool var_11 = (_Bool)0;
int var_12 = -806611283;
int zero = 0;
signed char var_14 = (signed char)-97;
short var_15 = (short)-10594;
short var_16 = (short)20207;
unsigned short var_17 = (unsigned short)30588;
void init() {
}

void checksum() {
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
