#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1300298002878929167LL;
short var_7 = (short)-1769;
signed char var_8 = (signed char)-114;
signed char var_11 = (signed char)-18;
int zero = 0;
unsigned long long int var_14 = 13817619860242861647ULL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)180;
void init() {
}

void checksum() {
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
