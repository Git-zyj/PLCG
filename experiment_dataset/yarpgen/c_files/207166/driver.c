#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1242146165;
short var_4 = (short)22572;
unsigned long long int var_5 = 827212786559817322ULL;
unsigned int var_6 = 2964715740U;
long long int var_7 = -6815428976728757598LL;
short var_8 = (short)17165;
unsigned int var_9 = 2252083834U;
short var_10 = (short)2239;
unsigned long long int var_11 = 1532491374568657647ULL;
unsigned short var_12 = (unsigned short)23626;
unsigned long long int var_13 = 16907411256637196855ULL;
int var_14 = 1060490600;
_Bool var_15 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)-15480;
short var_19 = (short)-21993;
short var_20 = (short)-13696;
int var_21 = -1940429714;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
