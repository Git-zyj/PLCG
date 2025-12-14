#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3318890087495400039LL;
unsigned long long int var_3 = 1464034164660790245ULL;
unsigned short var_6 = (unsigned short)12859;
long long int var_7 = -5413424714473079511LL;
unsigned short var_8 = (unsigned short)30866;
unsigned long long int var_10 = 2073915129037745808ULL;
long long int var_12 = -2315810133116007277LL;
int zero = 0;
unsigned short var_17 = (unsigned short)11616;
unsigned long long int var_18 = 3470498467726112295ULL;
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
