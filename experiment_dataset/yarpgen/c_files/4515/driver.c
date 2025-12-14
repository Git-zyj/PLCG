#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55571;
unsigned char var_6 = (unsigned char)243;
unsigned char var_10 = (unsigned char)213;
unsigned long long int var_12 = 7639640144932245458ULL;
int zero = 0;
unsigned long long int var_17 = 16680456435184004695ULL;
int var_18 = -1894316295;
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
