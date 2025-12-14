#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1110;
short var_12 = (short)26120;
short var_13 = (short)-15902;
signed char var_14 = (signed char)23;
int zero = 0;
unsigned char var_17 = (unsigned char)234;
int var_18 = -393514714;
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
