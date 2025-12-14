#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4575343974292676315LL;
unsigned long long int var_3 = 2516772688106480346ULL;
unsigned long long int var_4 = 16867446179776892033ULL;
signed char var_5 = (signed char)-97;
int var_6 = -781446950;
long long int var_7 = 4263713844399860725LL;
signed char var_8 = (signed char)-62;
long long int var_10 = 1884191724695328304LL;
int zero = 0;
unsigned short var_12 = (unsigned short)64289;
long long int var_13 = 302668543813757688LL;
long long int var_14 = -9124367158674266696LL;
unsigned long long int var_15 = 13868412742357612225ULL;
long long int var_16 = 5056255977140934594LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
