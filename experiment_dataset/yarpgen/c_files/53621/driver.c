#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)3;
long long int var_3 = 9124799815064404704LL;
int var_4 = 946233956;
int var_5 = 429359444;
signed char var_12 = (signed char)-22;
unsigned short var_16 = (unsigned short)45433;
short var_18 = (short)7586;
int zero = 0;
int var_20 = -1124461200;
unsigned int var_21 = 941575434U;
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
