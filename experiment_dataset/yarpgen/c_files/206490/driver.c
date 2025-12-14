#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)29041;
int var_6 = -1745223100;
signed char var_10 = (signed char)-22;
signed char var_12 = (signed char)-38;
int zero = 0;
unsigned long long int var_20 = 10515728622275482865ULL;
unsigned char var_21 = (unsigned char)162;
unsigned char var_22 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
