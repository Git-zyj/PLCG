#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45882;
long long int var_1 = 7952454065773654718LL;
short var_2 = (short)-26086;
short var_3 = (short)-7322;
long long int var_5 = -8046012075268454304LL;
unsigned short var_6 = (unsigned short)65078;
unsigned int var_7 = 607449982U;
unsigned long long int var_8 = 3566845496193647555ULL;
int zero = 0;
unsigned int var_10 = 970247478U;
unsigned short var_11 = (unsigned short)45829;
long long int var_12 = -453236398726411453LL;
unsigned int var_13 = 478857915U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
