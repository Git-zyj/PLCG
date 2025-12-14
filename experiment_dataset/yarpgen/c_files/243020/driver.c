#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1462;
unsigned char var_3 = (unsigned char)57;
unsigned int var_5 = 813123288U;
unsigned long long int var_6 = 2063205659631641275ULL;
unsigned short var_7 = (unsigned short)32352;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-9469;
unsigned short var_12 = (unsigned short)2573;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
