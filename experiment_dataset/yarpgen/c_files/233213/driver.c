#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 78948593;
unsigned char var_5 = (unsigned char)113;
unsigned long long int var_8 = 557548634151653664ULL;
long long int var_10 = -6622612797093469357LL;
int var_12 = 565352220;
unsigned long long int var_13 = 16517472608128890654ULL;
unsigned long long int var_14 = 2272045703365743551ULL;
int zero = 0;
int var_16 = -512236646;
short var_17 = (short)-12545;
void init() {
}

void checksum() {
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
