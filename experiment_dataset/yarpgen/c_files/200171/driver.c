#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31352;
short var_2 = (short)3552;
short var_8 = (short)2978;
unsigned int var_11 = 1538705537U;
unsigned short var_12 = (unsigned short)61684;
int zero = 0;
short var_13 = (short)4444;
unsigned long long int var_14 = 17398792671630906309ULL;
unsigned char var_15 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
