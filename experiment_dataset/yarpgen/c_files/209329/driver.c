#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)179;
unsigned char var_6 = (unsigned char)165;
unsigned short var_8 = (unsigned short)27297;
short var_12 = (short)32464;
short var_15 = (short)-22800;
unsigned int var_16 = 2334754663U;
int zero = 0;
unsigned char var_18 = (unsigned char)32;
short var_19 = (short)12854;
unsigned long long int var_20 = 15981705481603393890ULL;
void init() {
}

void checksum() {
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
