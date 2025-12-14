#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1835618739;
int var_5 = 945181147;
unsigned short var_6 = (unsigned short)60303;
unsigned char var_7 = (unsigned char)91;
unsigned short var_10 = (unsigned short)65363;
int zero = 0;
short var_12 = (short)17782;
unsigned short var_13 = (unsigned short)3434;
unsigned long long int var_14 = 3262713443190670695ULL;
unsigned char var_15 = (unsigned char)246;
unsigned char var_16 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
