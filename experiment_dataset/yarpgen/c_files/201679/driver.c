#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8348091530765478178LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 16773514606920058304ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1644720745U;
int zero = 0;
unsigned long long int var_11 = 1892969694715589591ULL;
unsigned long long int var_12 = 13221432968361698550ULL;
short var_13 = (short)-29070;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
