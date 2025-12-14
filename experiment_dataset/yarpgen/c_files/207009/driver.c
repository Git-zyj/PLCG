#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2797669751U;
int var_2 = 1125680945;
int var_3 = -1196532598;
short var_4 = (short)12774;
unsigned int var_6 = 3387126808U;
short var_9 = (short)-25210;
unsigned char var_11 = (unsigned char)84;
unsigned long long int var_13 = 14214064381593509073ULL;
int zero = 0;
int var_14 = -2085632105;
unsigned long long int var_15 = 5928741123166960421ULL;
unsigned int var_16 = 4061826141U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
