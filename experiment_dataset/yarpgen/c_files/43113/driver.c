#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2410175572U;
unsigned short var_1 = (unsigned short)20910;
short var_4 = (short)-23408;
unsigned long long int var_5 = 6730257652853775129ULL;
int var_8 = 513611163;
int var_12 = -1073848308;
int var_15 = -1117321092;
short var_16 = (short)12717;
int zero = 0;
short var_18 = (short)-10379;
unsigned int var_19 = 286336317U;
unsigned int var_20 = 343456713U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
