#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 845963376522852529LL;
short var_3 = (short)-14925;
unsigned long long int var_5 = 9881155792391590594ULL;
signed char var_10 = (signed char)-70;
short var_12 = (short)-27227;
short var_15 = (short)-17195;
int zero = 0;
unsigned int var_16 = 3898796862U;
unsigned long long int var_17 = 16642242544287005365ULL;
long long int var_18 = 2650032663003223825LL;
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
