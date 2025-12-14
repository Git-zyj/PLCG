#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6385;
long long int var_4 = -2583615212896084540LL;
unsigned long long int var_5 = 18053957343201988690ULL;
unsigned int var_6 = 1255927647U;
long long int var_8 = 4415073421991080168LL;
long long int var_9 = 7881753757729287667LL;
long long int var_10 = 5928403547754608409LL;
long long int var_11 = -5134353801597712640LL;
unsigned char var_12 = (unsigned char)60;
short var_13 = (short)-31899;
int zero = 0;
unsigned char var_14 = (unsigned char)209;
unsigned char var_15 = (unsigned char)212;
unsigned char var_16 = (unsigned char)42;
unsigned int var_17 = 1793329524U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
