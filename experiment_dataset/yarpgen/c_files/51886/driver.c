#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)1;
long long int var_7 = -1003931859098644178LL;
unsigned int var_9 = 3276233241U;
unsigned long long int var_14 = 401449851418189049ULL;
int zero = 0;
short var_16 = (short)24275;
unsigned int var_17 = 1850738884U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
