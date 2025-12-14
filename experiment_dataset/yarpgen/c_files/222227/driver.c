#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
int var_3 = 1715831782;
long long int var_4 = 8415329291975629572LL;
unsigned short var_5 = (unsigned short)2650;
short var_6 = (short)1332;
short var_9 = (short)-15351;
int zero = 0;
unsigned long long int var_10 = 6115762017774616678ULL;
short var_11 = (short)-17373;
signed char var_12 = (signed char)-92;
unsigned short var_13 = (unsigned short)15090;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
