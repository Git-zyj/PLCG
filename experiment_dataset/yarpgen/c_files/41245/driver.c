#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16151;
signed char var_4 = (signed char)-22;
short var_8 = (short)3693;
int zero = 0;
signed char var_14 = (signed char)77;
long long int var_15 = -2394527200594704924LL;
signed char var_16 = (signed char)-92;
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
