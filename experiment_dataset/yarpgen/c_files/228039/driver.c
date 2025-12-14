#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39973;
unsigned int var_2 = 3390153946U;
unsigned long long int var_7 = 6220969650212019454ULL;
signed char var_10 = (signed char)34;
int var_13 = -104700235;
unsigned long long int var_14 = 2481282201652982179ULL;
long long int var_15 = -5898193107048695921LL;
int zero = 0;
int var_16 = 1898075459;
unsigned char var_17 = (unsigned char)224;
int var_18 = -961380634;
unsigned long long int var_19 = 12415989856564052136ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
