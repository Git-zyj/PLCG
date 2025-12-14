#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6479402499789664213LL;
short var_2 = (short)19886;
unsigned int var_4 = 1392840863U;
int var_5 = -319976362;
short var_6 = (short)-22914;
unsigned short var_8 = (unsigned short)31848;
signed char var_9 = (signed char)-103;
unsigned long long int var_10 = 10691074732893645542ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)22;
signed char var_13 = (signed char)-76;
void init() {
}

void checksum() {
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
