#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4029763966208185030ULL;
int var_1 = 1552655859;
short var_4 = (short)-17703;
int var_5 = 1072522550;
short var_7 = (short)-20364;
unsigned long long int var_9 = 15263276089158336534ULL;
unsigned short var_11 = (unsigned short)34392;
unsigned short var_12 = (unsigned short)35286;
int zero = 0;
unsigned long long int var_14 = 5282185504198569679ULL;
unsigned long long int var_15 = 17062922784871128458ULL;
unsigned long long int var_16 = 6732326097865537209ULL;
unsigned int var_17 = 3581443680U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
