#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 426582034;
long long int var_5 = 7367006992801050137LL;
_Bool var_6 = (_Bool)0;
long long int var_7 = 2772159552175819290LL;
signed char var_9 = (signed char)-56;
int zero = 0;
long long int var_10 = 7173429496589125583LL;
signed char var_11 = (signed char)71;
unsigned int var_12 = 1471118981U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
