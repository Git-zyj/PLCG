#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2872400156U;
unsigned short var_1 = (unsigned short)64659;
unsigned char var_2 = (unsigned char)43;
int var_3 = 428984445;
long long int var_4 = 2299382637063617340LL;
long long int var_7 = -3201447826663098608LL;
short var_8 = (short)-3966;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)90;
unsigned char var_12 = (unsigned char)106;
unsigned short var_16 = (unsigned short)39895;
unsigned long long int var_17 = 16822739327470208190ULL;
int zero = 0;
int var_18 = 202985932;
int var_19 = -2596795;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
