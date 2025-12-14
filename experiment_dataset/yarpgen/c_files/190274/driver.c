#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1763973531;
long long int var_1 = 5472345982384953069LL;
long long int var_2 = 2531142971607882787LL;
unsigned long long int var_4 = 9111341610495190310ULL;
unsigned long long int var_11 = 9260371557665370712ULL;
unsigned char var_13 = (unsigned char)57;
int zero = 0;
unsigned int var_14 = 507156815U;
unsigned int var_15 = 2936167986U;
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
