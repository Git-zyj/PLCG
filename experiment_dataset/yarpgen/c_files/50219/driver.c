#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)186;
signed char var_3 = (signed char)-84;
short var_4 = (short)21728;
unsigned char var_6 = (unsigned char)129;
unsigned long long int var_7 = 1190403334200364612ULL;
int var_10 = -873790032;
int var_11 = -1277215065;
long long int var_12 = -2314495419463982916LL;
unsigned char var_13 = (unsigned char)10;
unsigned char var_14 = (unsigned char)102;
int var_16 = 1575575285;
int zero = 0;
unsigned int var_18 = 1322327488U;
unsigned int var_19 = 1720416857U;
int var_20 = 318316557;
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
