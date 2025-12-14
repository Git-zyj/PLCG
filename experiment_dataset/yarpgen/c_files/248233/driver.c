#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30800;
short var_3 = (short)31121;
short var_4 = (short)15811;
int var_10 = -1300376042;
short var_12 = (short)-17765;
unsigned char var_14 = (unsigned char)89;
short var_16 = (short)21490;
unsigned char var_18 = (unsigned char)109;
int zero = 0;
signed char var_19 = (signed char)-122;
short var_20 = (short)2706;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
