#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22972;
signed char var_3 = (signed char)-22;
unsigned short var_4 = (unsigned short)50185;
signed char var_5 = (signed char)12;
int var_6 = 1926281363;
long long int var_7 = 8516171161919804770LL;
unsigned short var_8 = (unsigned short)50273;
signed char var_9 = (signed char)-81;
int var_10 = 730276575;
int zero = 0;
unsigned short var_11 = (unsigned short)44687;
short var_12 = (short)28348;
void init() {
}

void checksum() {
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
