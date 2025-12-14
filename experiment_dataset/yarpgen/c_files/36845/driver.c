#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32309;
unsigned short var_1 = (unsigned short)3019;
short var_2 = (short)-30450;
unsigned long long int var_4 = 14591829477568927377ULL;
short var_6 = (short)-6758;
short var_8 = (short)12625;
unsigned char var_9 = (unsigned char)252;
short var_10 = (short)6012;
long long int var_11 = 9080174451893387577LL;
int var_12 = 1650689059;
long long int var_14 = -2700977865170129676LL;
int zero = 0;
short var_15 = (short)12659;
unsigned short var_16 = (unsigned short)16170;
signed char var_17 = (signed char)31;
unsigned long long int var_18 = 16155731659133331542ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
