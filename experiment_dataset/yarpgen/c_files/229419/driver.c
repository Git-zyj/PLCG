#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)2442;
signed char var_6 = (signed char)-50;
unsigned short var_8 = (unsigned short)57936;
unsigned long long int var_11 = 15239488968851782993ULL;
unsigned long long int var_13 = 13601534213744826829ULL;
unsigned int var_14 = 2179699311U;
int var_15 = -794183362;
unsigned int var_16 = 503511365U;
unsigned char var_18 = (unsigned char)71;
int zero = 0;
int var_19 = 1761869257;
unsigned int var_20 = 4056190024U;
unsigned int var_21 = 1976146902U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
