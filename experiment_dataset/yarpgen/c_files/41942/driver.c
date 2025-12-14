#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)199;
signed char var_1 = (signed char)-17;
unsigned int var_5 = 1072712813U;
unsigned long long int var_6 = 16743992717532366079ULL;
short var_8 = (short)-31684;
unsigned long long int var_9 = 2597220942541961277ULL;
signed char var_11 = (signed char)-30;
int zero = 0;
unsigned long long int var_14 = 12943235511783509524ULL;
unsigned char var_15 = (unsigned char)99;
signed char var_16 = (signed char)52;
unsigned char var_17 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
