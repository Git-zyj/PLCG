#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 830259804U;
int var_1 = 1158995005;
unsigned char var_4 = (unsigned char)126;
short var_6 = (short)27675;
unsigned int var_12 = 1096624842U;
signed char var_14 = (signed char)-32;
int zero = 0;
unsigned char var_16 = (unsigned char)147;
short var_17 = (short)15333;
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
