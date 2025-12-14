#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7287049825137385397LL;
signed char var_10 = (signed char)-9;
unsigned long long int var_12 = 11613590638305254931ULL;
int zero = 0;
int var_15 = -1149109439;
short var_16 = (short)23751;
void init() {
}

void checksum() {
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
