#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1308723384U;
short var_2 = (short)-19915;
long long int var_3 = -7117794359949214290LL;
long long int var_4 = -2943512961134896865LL;
int var_5 = -1123471438;
int var_6 = 1919210785;
int var_7 = 1936175130;
short var_8 = (short)-4696;
unsigned short var_9 = (unsigned short)43778;
int var_12 = 928471844;
int zero = 0;
unsigned int var_13 = 283333074U;
int var_14 = -148182880;
signed char var_15 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
