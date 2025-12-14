#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2106462944;
unsigned long long int var_3 = 1336794459358184364ULL;
int var_7 = 241236868;
long long int var_8 = 7699407553268680921LL;
unsigned char var_15 = (unsigned char)44;
int zero = 0;
unsigned char var_17 = (unsigned char)77;
unsigned long long int var_18 = 3034135935960501160ULL;
int var_19 = -302474028;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
