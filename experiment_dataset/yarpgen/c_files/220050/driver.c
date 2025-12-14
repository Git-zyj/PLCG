#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48846;
unsigned short var_1 = (unsigned short)29523;
short var_3 = (short)14050;
unsigned short var_7 = (unsigned short)61492;
unsigned short var_8 = (unsigned short)21438;
unsigned long long int var_9 = 14702136625760654440ULL;
signed char var_11 = (signed char)34;
unsigned char var_13 = (unsigned char)178;
int zero = 0;
long long int var_14 = -4106178123975802585LL;
signed char var_15 = (signed char)24;
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
