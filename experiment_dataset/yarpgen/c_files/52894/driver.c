#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5637757743774836150ULL;
long long int var_2 = -1530991499034002112LL;
int var_7 = -2105288726;
signed char var_9 = (signed char)106;
unsigned short var_10 = (unsigned short)38657;
unsigned short var_11 = (unsigned short)40228;
unsigned short var_14 = (unsigned short)55657;
unsigned int var_15 = 1292834857U;
int zero = 0;
unsigned short var_16 = (unsigned short)11474;
long long int var_17 = 7677290815264004059LL;
short var_18 = (short)-12437;
signed char var_19 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
