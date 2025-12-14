#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -629379968;
unsigned long long int var_5 = 13876637888435571005ULL;
int var_9 = -472255643;
int zero = 0;
unsigned short var_12 = (unsigned short)33772;
unsigned char var_13 = (unsigned char)30;
short var_14 = (short)-31341;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
