#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1161921399U;
long long int var_2 = -8094383840176761325LL;
short var_3 = (short)-352;
unsigned int var_4 = 3190010711U;
long long int var_6 = -1108348396030180186LL;
unsigned long long int var_7 = 16308727349958517831ULL;
short var_8 = (short)30363;
unsigned int var_9 = 4142452626U;
int zero = 0;
unsigned int var_10 = 3412126915U;
unsigned int var_11 = 2681767227U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
