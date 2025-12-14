#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1586090688U;
long long int var_1 = -2911134742534223474LL;
signed char var_6 = (signed char)81;
unsigned int var_12 = 2470998162U;
unsigned short var_13 = (unsigned short)43081;
unsigned int var_14 = 3044735420U;
unsigned long long int var_16 = 15928276072035398730ULL;
signed char var_17 = (signed char)-107;
int zero = 0;
int var_18 = -1001835151;
int var_19 = -1699756376;
unsigned char var_20 = (unsigned char)178;
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
