#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5357180810400652657ULL;
unsigned long long int var_2 = 3872706671401739102ULL;
unsigned int var_4 = 1403672783U;
unsigned long long int var_6 = 13867015936371106976ULL;
signed char var_7 = (signed char)-5;
signed char var_8 = (signed char)29;
signed char var_9 = (signed char)-52;
unsigned int var_10 = 3625569696U;
long long int var_11 = 9140246831765226646LL;
short var_13 = (short)-22387;
unsigned char var_17 = (unsigned char)73;
int zero = 0;
short var_19 = (short)19030;
long long int var_20 = 5728237543651122840LL;
long long int var_21 = -2467199795396190068LL;
long long int var_22 = 9013892268585632363LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
