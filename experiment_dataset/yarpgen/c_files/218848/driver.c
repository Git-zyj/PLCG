#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8982383883639178251LL;
long long int var_3 = 1164094529486154933LL;
signed char var_4 = (signed char)94;
short var_5 = (short)233;
unsigned long long int var_6 = 9438929202411180089ULL;
long long int var_7 = 7252234703328722202LL;
int var_9 = -1744971234;
long long int var_12 = 5269354227975442345LL;
int zero = 0;
signed char var_14 = (signed char)24;
unsigned int var_15 = 2818281516U;
void init() {
}

void checksum() {
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
