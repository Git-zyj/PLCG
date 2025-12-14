#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10147;
long long int var_2 = -4808061619946587825LL;
int var_3 = 1326345640;
unsigned char var_6 = (unsigned char)220;
signed char var_9 = (signed char)-41;
unsigned int var_11 = 222332914U;
unsigned long long int var_12 = 3662431215719538642ULL;
unsigned short var_17 = (unsigned short)37097;
int zero = 0;
unsigned short var_18 = (unsigned short)62771;
unsigned long long int var_19 = 17918406216076174957ULL;
unsigned short var_20 = (unsigned short)45349;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
