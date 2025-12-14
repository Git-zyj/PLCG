#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 8730457194000568473ULL;
int var_4 = -2079214487;
short var_5 = (short)-24989;
unsigned short var_6 = (unsigned short)13861;
unsigned long long int var_8 = 5626064684650068509ULL;
unsigned short var_9 = (unsigned short)12852;
int zero = 0;
unsigned long long int var_10 = 2812595171222795562ULL;
unsigned char var_11 = (unsigned char)102;
unsigned short var_12 = (unsigned short)44402;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
