#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2285897986U;
unsigned short var_4 = (unsigned short)42270;
unsigned short var_5 = (unsigned short)57436;
int zero = 0;
unsigned long long int var_17 = 11642396597036309442ULL;
short var_18 = (short)3668;
void init() {
}

void checksum() {
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
