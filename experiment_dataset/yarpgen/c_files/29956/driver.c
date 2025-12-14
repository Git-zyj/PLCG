#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)119;
signed char var_9 = (signed char)-115;
unsigned short var_12 = (unsigned short)28646;
signed char var_13 = (signed char)(-127 - 1);
int zero = 0;
unsigned short var_14 = (unsigned short)16532;
unsigned char var_15 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
