#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7244;
short var_2 = (short)13192;
unsigned int var_3 = 1109448795U;
unsigned short var_5 = (unsigned short)14361;
unsigned int var_7 = 2162027426U;
unsigned int var_11 = 1305174573U;
unsigned short var_12 = (unsigned short)58451;
int zero = 0;
unsigned short var_14 = (unsigned short)39119;
unsigned long long int var_15 = 13089727123767381924ULL;
unsigned int var_16 = 2895483210U;
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
