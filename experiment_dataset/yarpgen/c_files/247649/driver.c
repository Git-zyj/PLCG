#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12008849601007656458ULL;
short var_3 = (short)352;
int var_4 = -1942358360;
unsigned char var_5 = (unsigned char)13;
unsigned short var_6 = (unsigned short)7889;
short var_7 = (short)16628;
unsigned int var_8 = 2943593769U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)239;
int zero = 0;
signed char var_13 = (signed char)-6;
unsigned long long int var_14 = 15563354955109664420ULL;
unsigned long long int var_15 = 18070784186924321673ULL;
unsigned int var_16 = 3300916272U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
