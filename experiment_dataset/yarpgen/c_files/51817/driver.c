#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1097206355;
unsigned short var_3 = (unsigned short)41464;
short var_4 = (short)-6065;
unsigned short var_6 = (unsigned short)28296;
unsigned char var_16 = (unsigned char)147;
short var_17 = (short)10143;
unsigned int var_19 = 330308125U;
int zero = 0;
int var_20 = -1274931736;
int var_21 = 1308839443;
void init() {
}

void checksum() {
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
