#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23463;
unsigned long long int var_1 = 13800423576548017477ULL;
short var_2 = (short)14207;
long long int var_3 = 6749452971233168499LL;
unsigned short var_5 = (unsigned short)2399;
int var_6 = 354188357;
short var_7 = (short)-14487;
unsigned long long int var_8 = 6898577950515882924ULL;
unsigned int var_9 = 995648979U;
unsigned long long int var_10 = 13169659256406856237ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)192;
int var_12 = -1109375779;
unsigned long long int var_13 = 17730896781327861974ULL;
unsigned long long int var_14 = 10319392320545447465ULL;
unsigned int var_15 = 2000478942U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
