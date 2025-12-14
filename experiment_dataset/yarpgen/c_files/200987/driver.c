#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)108;
unsigned char var_10 = (unsigned char)13;
signed char var_12 = (signed char)-14;
short var_14 = (short)-21667;
unsigned char var_16 = (unsigned char)189;
int zero = 0;
int var_20 = -1003601590;
unsigned int var_21 = 2076556311U;
unsigned long long int var_22 = 12306113489305463002ULL;
unsigned char var_23 = (unsigned char)191;
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
