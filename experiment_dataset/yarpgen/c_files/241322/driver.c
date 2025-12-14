#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6652626600166513001LL;
signed char var_1 = (signed char)72;
unsigned short var_3 = (unsigned short)13249;
long long int var_6 = -1196125451207714986LL;
unsigned char var_7 = (unsigned char)131;
short var_8 = (short)17095;
short var_10 = (short)5659;
int zero = 0;
unsigned int var_11 = 175469394U;
unsigned int var_12 = 1101811712U;
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
