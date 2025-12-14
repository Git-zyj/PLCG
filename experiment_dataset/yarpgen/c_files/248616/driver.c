#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
unsigned long long int var_1 = 2408981647818314470ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)63295;
signed char var_9 = (signed char)75;
unsigned long long int var_10 = 16085951014503760376ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-21516;
unsigned short var_16 = (unsigned short)2504;
signed char var_17 = (signed char)-83;
unsigned int var_18 = 2382055111U;
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
