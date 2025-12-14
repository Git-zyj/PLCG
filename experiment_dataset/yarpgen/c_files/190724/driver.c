#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16213932753512114623ULL;
unsigned short var_3 = (unsigned short)33659;
unsigned char var_5 = (unsigned char)122;
unsigned char var_6 = (unsigned char)25;
long long int var_12 = 2211061095478063174LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-90;
unsigned char var_18 = (unsigned char)34;
unsigned char var_19 = (unsigned char)215;
short var_20 = (short)-29861;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
