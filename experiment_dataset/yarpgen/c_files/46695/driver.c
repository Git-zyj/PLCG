#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)213;
signed char var_5 = (signed char)93;
unsigned char var_7 = (unsigned char)98;
unsigned short var_8 = (unsigned short)31814;
int var_10 = 1343900772;
long long int var_11 = -951069612480496705LL;
unsigned char var_13 = (unsigned char)244;
int zero = 0;
short var_14 = (short)29185;
int var_15 = 292939127;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
