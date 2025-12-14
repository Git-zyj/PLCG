#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)27877;
unsigned short var_8 = (unsigned short)3092;
unsigned short var_10 = (unsigned short)55195;
unsigned char var_13 = (unsigned char)119;
unsigned char var_15 = (unsigned char)95;
int var_17 = -259450304;
int zero = 0;
short var_20 = (short)5709;
unsigned short var_21 = (unsigned short)20057;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
