#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
unsigned short var_3 = (unsigned short)29896;
unsigned char var_6 = (unsigned char)124;
unsigned short var_8 = (unsigned short)11018;
unsigned short var_9 = (unsigned short)1571;
short var_10 = (short)26457;
unsigned char var_11 = (unsigned char)152;
unsigned short var_12 = (unsigned short)59925;
unsigned short var_13 = (unsigned short)2291;
unsigned short var_14 = (unsigned short)39118;
int zero = 0;
unsigned short var_17 = (unsigned short)17245;
unsigned short var_18 = (unsigned short)64746;
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
