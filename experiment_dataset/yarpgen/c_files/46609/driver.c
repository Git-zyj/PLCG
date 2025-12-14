#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4333326877318285170ULL;
short var_5 = (short)24932;
short var_15 = (short)18691;
int zero = 0;
int var_17 = 1582591950;
unsigned int var_18 = 2735250531U;
unsigned long long int var_19 = 207439888274710076ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
