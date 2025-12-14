#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8350752464536815387ULL;
unsigned char var_4 = (unsigned char)242;
unsigned char var_8 = (unsigned char)234;
unsigned int var_9 = 3957826118U;
unsigned char var_10 = (unsigned char)255;
int zero = 0;
unsigned short var_11 = (unsigned short)26667;
short var_12 = (short)3060;
short var_13 = (short)29892;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
