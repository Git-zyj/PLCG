#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-32315;
unsigned short var_3 = (unsigned short)39755;
long long int var_6 = -7442269393098946773LL;
unsigned long long int var_9 = 658159755556063161ULL;
long long int var_11 = -644822976798071419LL;
unsigned int var_13 = 345682002U;
short var_14 = (short)-16519;
unsigned int var_15 = 1970058933U;
int zero = 0;
short var_17 = (short)-1142;
unsigned int var_18 = 4293905677U;
void init() {
}

void checksum() {
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
