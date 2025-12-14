#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)12;
unsigned char var_1 = (unsigned char)36;
unsigned long long int var_4 = 16115431077889627667ULL;
short var_5 = (short)25716;
short var_8 = (short)-10062;
signed char var_10 = (signed char)68;
short var_13 = (short)26438;
unsigned short var_14 = (unsigned short)46599;
int zero = 0;
unsigned long long int var_15 = 10662850954967665072ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 10972578452343667339ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
