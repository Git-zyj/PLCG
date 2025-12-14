#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
unsigned long long int var_2 = 361439702951010348ULL;
signed char var_5 = (signed char)-70;
short var_6 = (short)-20702;
unsigned long long int var_8 = 1190470396924297716ULL;
unsigned char var_10 = (unsigned char)158;
unsigned long long int var_11 = 10202265356325317144ULL;
unsigned long long int var_13 = 9367235369326282364ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)16396;
short var_15 = (short)-27803;
unsigned long long int var_16 = 12963543927131382344ULL;
unsigned short var_17 = (unsigned short)62477;
unsigned char var_18 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
