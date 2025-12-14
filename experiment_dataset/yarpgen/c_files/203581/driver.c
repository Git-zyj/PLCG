#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)61;
unsigned short var_2 = (unsigned short)28843;
unsigned char var_3 = (unsigned char)109;
unsigned char var_4 = (unsigned char)164;
short var_5 = (short)29672;
int var_6 = -1476324102;
unsigned char var_7 = (unsigned char)190;
int zero = 0;
int var_15 = 881505972;
unsigned short var_16 = (unsigned short)37548;
void init() {
}

void checksum() {
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
