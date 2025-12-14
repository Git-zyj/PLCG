#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1640901030;
int var_2 = 2064231241;
unsigned char var_5 = (unsigned char)114;
signed char var_8 = (signed char)-72;
int var_14 = -1964529825;
long long int var_18 = -5648287072213027640LL;
int zero = 0;
long long int var_20 = -1805340372626959929LL;
unsigned char var_21 = (unsigned char)37;
unsigned char var_22 = (unsigned char)128;
long long int var_23 = -2557932033749916887LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
