#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
unsigned int var_11 = 530484841U;
short var_12 = (short)-22402;
short var_14 = (short)57;
short var_17 = (short)13094;
int zero = 0;
unsigned long long int var_18 = 7979775522513913601ULL;
unsigned char var_19 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
