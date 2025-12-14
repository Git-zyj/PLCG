#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7068876638273135788ULL;
short var_3 = (short)-21012;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 809440876U;
unsigned short var_11 = (unsigned short)52938;
unsigned int var_12 = 4185522496U;
long long int var_14 = -514003418426901560LL;
int zero = 0;
long long int var_15 = -2965797149527434003LL;
signed char var_16 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
