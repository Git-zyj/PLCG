#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)34;
short var_5 = (short)18688;
unsigned long long int var_6 = 6305517787680766659ULL;
int var_11 = -445617106;
int zero = 0;
unsigned short var_12 = (unsigned short)46140;
int var_13 = -32497721;
unsigned char var_14 = (unsigned char)244;
unsigned char var_15 = (unsigned char)154;
unsigned long long int var_16 = 18288412178883105355ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
