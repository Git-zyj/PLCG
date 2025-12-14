#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
int var_1 = -427237036;
unsigned long long int var_2 = 15065360241465332457ULL;
unsigned int var_3 = 1002178123U;
unsigned int var_4 = 278180045U;
unsigned char var_5 = (unsigned char)99;
unsigned int var_6 = 1987568158U;
unsigned long long int var_7 = 3429700764366096996ULL;
int var_8 = 1200282248;
unsigned int var_10 = 2601882966U;
int var_11 = 1100043888;
unsigned int var_12 = 3565379688U;
unsigned char var_13 = (unsigned char)4;
unsigned char var_14 = (unsigned char)139;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3273388001U;
unsigned int var_17 = 840903042U;
unsigned long long int var_18 = 7732719185403687249ULL;
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
