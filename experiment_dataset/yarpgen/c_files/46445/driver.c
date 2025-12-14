#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)50362;
unsigned long long int var_6 = 7244183738913954110ULL;
short var_7 = (short)24934;
int var_8 = -4504118;
int var_13 = 795358560;
int zero = 0;
int var_20 = -1680563466;
signed char var_21 = (signed char)96;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3174264634U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
