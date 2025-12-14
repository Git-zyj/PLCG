#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -552238188;
short var_7 = (short)30099;
unsigned long long int var_11 = 11795700463910621137ULL;
int zero = 0;
unsigned int var_12 = 1010229885U;
unsigned short var_13 = (unsigned short)42315;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
