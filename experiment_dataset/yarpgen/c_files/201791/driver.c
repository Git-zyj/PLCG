#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3819909280U;
unsigned long long int var_1 = 16387932049337431838ULL;
unsigned int var_6 = 3635443018U;
int var_7 = 1286197099;
unsigned short var_10 = (unsigned short)46007;
long long int var_11 = -3414602501302283618LL;
int zero = 0;
unsigned short var_14 = (unsigned short)16088;
unsigned int var_15 = 2303111050U;
unsigned short var_16 = (unsigned short)30491;
long long int var_17 = 5979062052533717701LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
