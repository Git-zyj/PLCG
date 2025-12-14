#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-70;
unsigned int var_3 = 1066195041U;
unsigned long long int var_4 = 8767096484338644043ULL;
unsigned int var_7 = 1163544168U;
int var_10 = 309352073;
short var_11 = (short)12320;
int zero = 0;
unsigned long long int var_15 = 16893332842814409065ULL;
unsigned short var_16 = (unsigned short)64792;
signed char var_17 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
