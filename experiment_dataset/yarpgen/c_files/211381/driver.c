#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22976;
int var_2 = -1347830081;
_Bool var_3 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)128;
unsigned short var_10 = (unsigned short)48240;
unsigned int var_15 = 3886028178U;
int zero = 0;
short var_16 = (short)-1901;
unsigned int var_17 = 1870250105U;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 3472045815493331712ULL;
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
