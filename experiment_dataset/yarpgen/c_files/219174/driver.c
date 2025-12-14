#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1927529692;
int var_4 = -523045343;
unsigned int var_6 = 1077920647U;
_Bool var_12 = (_Bool)1;
int var_15 = 514062732;
int zero = 0;
short var_19 = (short)14411;
int var_20 = -593052682;
int var_21 = -1051239865;
unsigned int var_22 = 1562377547U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
