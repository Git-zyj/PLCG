#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20650;
unsigned int var_1 = 2856537734U;
short var_3 = (short)-14080;
short var_4 = (short)29157;
unsigned int var_7 = 1121614498U;
signed char var_8 = (signed char)62;
unsigned int var_10 = 14389766U;
long long int var_11 = -260476463612551840LL;
short var_14 = (short)-27750;
unsigned long long int var_15 = 14915506487253543625ULL;
unsigned long long int var_16 = 9046357397465754619ULL;
int var_17 = -1335562611;
signed char var_18 = (signed char)-98;
int zero = 0;
long long int var_20 = 5221439940570814988LL;
unsigned int var_21 = 3895468379U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
