#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6912;
int var_2 = -1431043628;
short var_3 = (short)27396;
short var_4 = (short)3218;
unsigned short var_5 = (unsigned short)65;
long long int var_6 = 8818436783240205151LL;
unsigned short var_8 = (unsigned short)44118;
unsigned short var_9 = (unsigned short)30957;
int var_10 = 942561954;
int zero = 0;
int var_11 = 1186898520;
unsigned long long int var_12 = 16923614947486094022ULL;
unsigned short var_13 = (unsigned short)8707;
int var_14 = -222530766;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
