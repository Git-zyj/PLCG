#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)46;
unsigned long long int var_2 = 6085230842195746518ULL;
long long int var_3 = -5010337006894164728LL;
short var_4 = (short)-20436;
unsigned long long int var_7 = 406400238144660055ULL;
unsigned int var_8 = 2924874171U;
unsigned short var_10 = (unsigned short)14261;
unsigned long long int var_12 = 13723933279164458405ULL;
unsigned int var_14 = 247053064U;
int zero = 0;
unsigned char var_15 = (unsigned char)240;
unsigned char var_16 = (unsigned char)91;
long long int var_17 = -7511057327903797167LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
