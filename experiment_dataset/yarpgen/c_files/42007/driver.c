#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17444;
unsigned long long int var_4 = 11808273719245867249ULL;
short var_5 = (short)-11204;
unsigned int var_7 = 4001562684U;
_Bool var_8 = (_Bool)1;
short var_9 = (short)7070;
int zero = 0;
short var_11 = (short)29973;
unsigned long long int var_12 = 9463953984253063523ULL;
unsigned int var_13 = 2459458942U;
unsigned short var_14 = (unsigned short)13942;
unsigned long long int var_15 = 11049902437199873973ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
