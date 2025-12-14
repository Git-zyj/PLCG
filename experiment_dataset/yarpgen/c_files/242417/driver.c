#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)152;
unsigned long long int var_5 = 6509356750676978057ULL;
unsigned int var_6 = 3381945515U;
unsigned long long int var_8 = 11609094062296265504ULL;
long long int var_11 = 2313846732798650085LL;
unsigned long long int var_12 = 16961725593201585693ULL;
int zero = 0;
unsigned long long int var_15 = 4550056060353425208ULL;
unsigned char var_16 = (unsigned char)173;
unsigned char var_17 = (unsigned char)152;
void init() {
}

void checksum() {
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
