#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)47613;
unsigned char var_4 = (unsigned char)18;
int var_6 = 318599806;
unsigned int var_7 = 1915617256U;
int var_12 = -487356419;
int var_13 = -344320596;
unsigned char var_14 = (unsigned char)128;
unsigned long long int var_15 = 15935090501063518671ULL;
int zero = 0;
int var_16 = -1176046856;
unsigned int var_17 = 2045872874U;
unsigned char var_18 = (unsigned char)91;
int var_19 = 230476214;
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
