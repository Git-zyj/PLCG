#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1210994693;
unsigned char var_1 = (unsigned char)77;
unsigned long long int var_5 = 9230652848894642604ULL;
unsigned char var_7 = (unsigned char)34;
unsigned int var_8 = 4221463146U;
short var_9 = (short)-29912;
unsigned long long int var_10 = 12531897238202559069ULL;
int zero = 0;
int var_12 = 1493435544;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)63597;
short var_15 = (short)-16255;
unsigned short var_16 = (unsigned short)2894;
unsigned long long int var_17 = 14575449075387440724ULL;
unsigned char var_18 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
