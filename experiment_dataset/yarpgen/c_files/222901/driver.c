#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)193;
signed char var_1 = (signed char)64;
unsigned int var_2 = 3442741584U;
signed char var_6 = (signed char)-114;
unsigned long long int var_7 = 8622952708068843691ULL;
unsigned char var_9 = (unsigned char)232;
unsigned long long int var_10 = 14287259158801199376ULL;
unsigned long long int var_11 = 11895169322853866160ULL;
short var_13 = (short)-19456;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_17 = (short)-5621;
short var_18 = (short)-25094;
void init() {
}

void checksum() {
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
