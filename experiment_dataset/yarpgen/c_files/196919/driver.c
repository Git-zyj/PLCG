#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11410872621006909350ULL;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_11 = (signed char)-89;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1424098910U;
short var_17 = (short)-22877;
_Bool var_18 = (_Bool)0;
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
