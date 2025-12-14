#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26017;
unsigned short var_3 = (unsigned short)29354;
unsigned long long int var_5 = 1044648331015001206ULL;
unsigned short var_9 = (unsigned short)43187;
short var_15 = (short)-16582;
int zero = 0;
unsigned short var_20 = (unsigned short)13421;
int var_21 = -987972148;
short var_22 = (short)12800;
short var_23 = (short)-26721;
unsigned int var_24 = 3363081616U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
