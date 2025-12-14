#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-72;
short var_3 = (short)17414;
long long int var_11 = -3244117252472872972LL;
signed char var_15 = (signed char)8;
int zero = 0;
unsigned long long int var_16 = 2561724498007593406ULL;
unsigned int var_17 = 4141511236U;
unsigned int var_18 = 1700035870U;
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
