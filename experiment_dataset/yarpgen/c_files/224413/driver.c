#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15125921666429186483ULL;
unsigned long long int var_2 = 8597606624994530288ULL;
int var_5 = 1498760910;
short var_7 = (short)13779;
short var_8 = (short)-20449;
int var_9 = 1480751449;
unsigned int var_10 = 4092324885U;
short var_13 = (short)-2495;
int zero = 0;
short var_14 = (short)-14965;
unsigned long long int var_15 = 4320006559743912569ULL;
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
