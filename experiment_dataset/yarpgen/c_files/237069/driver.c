#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
unsigned long long int var_2 = 6431161738388091856ULL;
short var_6 = (short)-3478;
unsigned char var_8 = (unsigned char)217;
short var_9 = (short)678;
unsigned short var_11 = (unsigned short)9283;
unsigned long long int var_13 = 7146035114004465063ULL;
unsigned long long int var_14 = 2645323870571934599ULL;
unsigned char var_15 = (unsigned char)63;
int zero = 0;
unsigned char var_16 = (unsigned char)212;
unsigned long long int var_17 = 1858456334212729663ULL;
short var_18 = (short)-16152;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
