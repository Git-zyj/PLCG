#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32753;
unsigned long long int var_3 = 14306588208416186555ULL;
signed char var_6 = (signed char)87;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)6;
int zero = 0;
short var_14 = (short)6668;
short var_15 = (short)12672;
unsigned short var_16 = (unsigned short)54740;
signed char var_17 = (signed char)51;
unsigned short var_18 = (unsigned short)39278;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
