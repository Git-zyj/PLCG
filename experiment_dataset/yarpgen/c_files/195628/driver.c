#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15603;
unsigned long long int var_3 = 2081450570956516910ULL;
unsigned long long int var_4 = 3887337651652260482ULL;
short var_7 = (short)11837;
unsigned char var_12 = (unsigned char)171;
unsigned int var_15 = 932818034U;
short var_17 = (short)31031;
long long int var_18 = -192548683654631389LL;
int zero = 0;
unsigned char var_19 = (unsigned char)114;
unsigned long long int var_20 = 10405699521288705202ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
