#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
unsigned long long int var_1 = 14970672557687253294ULL;
unsigned short var_10 = (unsigned short)58769;
long long int var_13 = -1912168198813707363LL;
int zero = 0;
unsigned long long int var_16 = 5981630819625889784ULL;
unsigned long long int var_17 = 7927626887856516353ULL;
short var_18 = (short)9165;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
