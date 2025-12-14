#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned short var_2 = (unsigned short)63321;
unsigned long long int var_8 = 4021487902288704190ULL;
unsigned int var_9 = 2348222046U;
short var_12 = (short)1314;
short var_17 = (short)17292;
unsigned short var_18 = (unsigned short)32549;
int zero = 0;
int var_19 = 1128082094;
signed char var_20 = (signed char)-61;
unsigned char var_21 = (unsigned char)45;
int var_22 = 1695480468;
int var_23 = 1412289700;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
