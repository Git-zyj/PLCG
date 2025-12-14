#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
int var_3 = 1064083968;
short var_5 = (short)-28045;
signed char var_8 = (signed char)-34;
int var_10 = 1202569462;
short var_11 = (short)-23620;
int zero = 0;
short var_13 = (short)11471;
short var_14 = (short)-5819;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-30433;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
