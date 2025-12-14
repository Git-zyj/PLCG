#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 664458569;
int var_8 = -1358849336;
int var_10 = -1939410744;
int var_13 = -1999587842;
unsigned char var_14 = (unsigned char)83;
unsigned int var_15 = 3605169200U;
int var_16 = 395325207;
int zero = 0;
unsigned char var_18 = (unsigned char)213;
int var_19 = 1319950089;
unsigned int var_20 = 2817618244U;
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
