#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)232;
unsigned short var_9 = (unsigned short)52610;
signed char var_13 = (signed char)65;
unsigned char var_16 = (unsigned char)160;
int zero = 0;
short var_17 = (short)-4338;
unsigned long long int var_18 = 9777261640649241536ULL;
void init() {
}

void checksum() {
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
