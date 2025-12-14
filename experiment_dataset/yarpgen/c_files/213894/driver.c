#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2010223970U;
int var_4 = -946418865;
int var_6 = 1316976022;
unsigned short var_12 = (unsigned short)27485;
unsigned short var_13 = (unsigned short)41131;
int zero = 0;
unsigned short var_16 = (unsigned short)38601;
int var_17 = 1085914396;
int var_18 = 1712590760;
int var_19 = -106594926;
long long int var_20 = 1211887921603066761LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
