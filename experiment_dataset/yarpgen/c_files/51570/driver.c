#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)160;
unsigned long long int var_4 = 9080121307461725192ULL;
int var_5 = 788949102;
unsigned char var_7 = (unsigned char)170;
unsigned int var_12 = 2071124834U;
unsigned char var_17 = (unsigned char)127;
int zero = 0;
int var_19 = -2137668035;
unsigned long long int var_20 = 14394059269024048304ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
