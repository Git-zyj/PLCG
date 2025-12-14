#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 234923526;
unsigned int var_4 = 3836693412U;
short var_5 = (short)-20647;
unsigned int var_9 = 2443915989U;
unsigned int var_10 = 1047367946U;
short var_11 = (short)20437;
unsigned int var_12 = 3462650198U;
unsigned char var_14 = (unsigned char)49;
int zero = 0;
int var_16 = 1165022830;
unsigned int var_17 = 4243904678U;
unsigned int var_18 = 2853070986U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
