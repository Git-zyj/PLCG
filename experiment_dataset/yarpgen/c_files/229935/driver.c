#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11503499125869088422ULL;
unsigned short var_5 = (unsigned short)58887;
unsigned int var_8 = 2526553964U;
int zero = 0;
unsigned long long int var_14 = 15008173229813766471ULL;
unsigned int var_15 = 225121352U;
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
