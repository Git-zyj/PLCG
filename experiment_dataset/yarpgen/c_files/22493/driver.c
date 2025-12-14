#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8072066511344072657LL;
signed char var_1 = (signed char)3;
short var_3 = (short)17800;
short var_4 = (short)-5731;
long long int var_8 = -2194854522513611631LL;
unsigned short var_10 = (unsigned short)19388;
int var_14 = -355097843;
unsigned short var_16 = (unsigned short)28625;
int zero = 0;
unsigned short var_20 = (unsigned short)790;
int var_21 = -492543626;
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
