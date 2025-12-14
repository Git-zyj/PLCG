#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10849;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)2;
unsigned char var_4 = (unsigned char)94;
short var_5 = (short)-17068;
unsigned short var_8 = (unsigned short)36270;
long long int var_9 = 2613095684868922007LL;
int zero = 0;
int var_10 = -444822303;
int var_11 = -1053486589;
signed char var_12 = (signed char)89;
signed char var_13 = (signed char)66;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
