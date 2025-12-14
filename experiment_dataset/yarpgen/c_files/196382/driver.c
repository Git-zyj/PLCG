#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61430;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 2339846225625690670ULL;
signed char var_5 = (signed char)3;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 3298113100434894741ULL;
int zero = 0;
signed char var_14 = (signed char)(-127 - 1);
signed char var_15 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
