#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1980958744;
long long int var_1 = 4304102135119060757LL;
unsigned int var_2 = 4095090486U;
unsigned int var_3 = 2582887510U;
unsigned int var_4 = 1126521982U;
unsigned int var_5 = 1848267661U;
short var_6 = (short)-8355;
unsigned int var_7 = 1543866914U;
unsigned long long int var_8 = 12006433224389579406ULL;
unsigned long long int var_9 = 13143696539971142893ULL;
unsigned int var_10 = 2463096640U;
int zero = 0;
int var_11 = -1872394469;
long long int var_12 = 8637112874590923051LL;
long long int var_13 = -5210206010690311803LL;
_Bool var_14 = (_Bool)0;
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
