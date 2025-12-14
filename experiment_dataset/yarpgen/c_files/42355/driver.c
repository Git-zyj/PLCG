#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1888209160557688996ULL;
_Bool var_3 = (_Bool)1;
int var_4 = -873240874;
unsigned short var_6 = (unsigned short)37139;
unsigned int var_13 = 2052802312U;
short var_15 = (short)-21021;
unsigned short var_17 = (unsigned short)12181;
int var_18 = -1522080059;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)95;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
