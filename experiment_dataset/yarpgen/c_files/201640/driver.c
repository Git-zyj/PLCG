#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43449;
long long int var_3 = 1430670934439466867LL;
unsigned int var_7 = 1572531492U;
unsigned short var_11 = (unsigned short)30730;
signed char var_13 = (signed char)22;
short var_15 = (short)3450;
unsigned char var_16 = (unsigned char)172;
int zero = 0;
unsigned char var_17 = (unsigned char)108;
short var_18 = (short)-28698;
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
