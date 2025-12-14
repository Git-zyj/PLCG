#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14982;
long long int var_2 = 2646025051403938057LL;
unsigned short var_6 = (unsigned short)2271;
int var_7 = 963737473;
int var_8 = 292847762;
unsigned int var_10 = 4194916574U;
unsigned short var_11 = (unsigned short)24107;
unsigned long long int var_13 = 12099459648788507673ULL;
unsigned char var_16 = (unsigned char)193;
unsigned short var_17 = (unsigned short)28482;
unsigned short var_18 = (unsigned short)31546;
int zero = 0;
short var_20 = (short)7367;
unsigned char var_21 = (unsigned char)20;
long long int var_22 = 9195160606715378024LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
