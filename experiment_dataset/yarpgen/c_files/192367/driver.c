#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8533336999485756524ULL;
int var_2 = 1276241360;
short var_4 = (short)166;
unsigned int var_5 = 2957742883U;
short var_7 = (short)8328;
unsigned char var_10 = (unsigned char)162;
unsigned char var_11 = (unsigned char)191;
unsigned short var_12 = (unsigned short)51158;
unsigned int var_13 = 981336025U;
unsigned short var_14 = (unsigned short)1506;
signed char var_15 = (signed char)9;
unsigned char var_16 = (unsigned char)93;
int zero = 0;
unsigned short var_17 = (unsigned short)31675;
int var_18 = -703651787;
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
