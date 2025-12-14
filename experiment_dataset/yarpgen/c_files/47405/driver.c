#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12103;
short var_2 = (short)31957;
unsigned int var_3 = 3756969931U;
unsigned int var_4 = 812698123U;
short var_5 = (short)11207;
unsigned char var_6 = (unsigned char)203;
signed char var_7 = (signed char)-58;
short var_9 = (short)-2447;
long long int var_10 = -2943701624987011595LL;
unsigned int var_11 = 2047053367U;
short var_15 = (short)14446;
unsigned char var_16 = (unsigned char)143;
long long int var_17 = 6050752223512990108LL;
int zero = 0;
long long int var_19 = -3148006296065375825LL;
unsigned char var_20 = (unsigned char)137;
int var_21 = -1129398784;
signed char var_22 = (signed char)-38;
unsigned char var_23 = (unsigned char)77;
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
