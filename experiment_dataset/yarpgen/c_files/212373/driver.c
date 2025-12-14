#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12816893436607598672ULL;
unsigned short var_5 = (unsigned short)41037;
unsigned int var_8 = 1053668818U;
int var_9 = 1497526282;
int zero = 0;
short var_10 = (short)-1776;
unsigned int var_11 = 885125140U;
short var_12 = (short)28604;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
