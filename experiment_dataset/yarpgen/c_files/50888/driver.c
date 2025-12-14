#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25684;
unsigned short var_1 = (unsigned short)17997;
unsigned short var_2 = (unsigned short)36989;
unsigned char var_3 = (unsigned char)84;
unsigned long long int var_4 = 17422196359580288587ULL;
long long int var_5 = -3639621270136473352LL;
long long int var_6 = -5472511638204944449LL;
unsigned long long int var_7 = 7425212668219342504ULL;
unsigned long long int var_8 = 10867189179606634246ULL;
unsigned char var_10 = (unsigned char)18;
int zero = 0;
unsigned long long int var_11 = 12864931771062694238ULL;
unsigned short var_12 = (unsigned short)13525;
unsigned int var_13 = 1953756392U;
long long int var_14 = 5604897578775331054LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
