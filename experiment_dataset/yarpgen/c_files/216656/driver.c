#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1888547292;
unsigned long long int var_3 = 11606850316648162499ULL;
int var_8 = -2066276305;
int var_10 = 1531541765;
int zero = 0;
long long int var_11 = -3208399273360082431LL;
short var_12 = (short)6989;
int var_13 = 1343831339;
long long int var_14 = -1098578904120278414LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
