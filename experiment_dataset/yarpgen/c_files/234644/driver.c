#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)180;
unsigned long long int var_4 = 4526568543338477928ULL;
unsigned long long int var_5 = 7646876761224801083ULL;
unsigned char var_6 = (unsigned char)154;
short var_8 = (short)12968;
short var_10 = (short)-22143;
int zero = 0;
int var_11 = 1121955117;
unsigned char var_12 = (unsigned char)83;
unsigned char var_13 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
