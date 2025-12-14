#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16777;
unsigned char var_2 = (unsigned char)101;
unsigned short var_5 = (unsigned short)57650;
unsigned char var_7 = (unsigned char)227;
unsigned char var_10 = (unsigned char)89;
unsigned char var_11 = (unsigned char)236;
int var_12 = -199501255;
unsigned int var_13 = 2991972162U;
unsigned short var_15 = (unsigned short)28141;
int zero = 0;
short var_16 = (short)16807;
unsigned int var_17 = 1981029743U;
unsigned char var_18 = (unsigned char)23;
_Bool var_19 = (_Bool)0;
int var_20 = 575101431;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
