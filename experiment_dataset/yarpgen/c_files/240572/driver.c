#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5632073582344453635LL;
unsigned char var_8 = (unsigned char)73;
unsigned char var_11 = (unsigned char)1;
int zero = 0;
unsigned short var_12 = (unsigned short)14417;
unsigned short var_13 = (unsigned short)6684;
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
