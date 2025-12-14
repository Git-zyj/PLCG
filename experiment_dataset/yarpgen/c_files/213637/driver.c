#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
int var_2 = -329228201;
unsigned short var_3 = (unsigned short)44162;
unsigned short var_10 = (unsigned short)41699;
int var_11 = 282757726;
int var_13 = -1115637079;
short var_14 = (short)-21796;
int zero = 0;
int var_15 = 1776246189;
long long int var_16 = 6490264412481952374LL;
unsigned char var_17 = (unsigned char)175;
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
