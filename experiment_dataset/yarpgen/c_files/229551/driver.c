#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 801604859;
int var_4 = -46290564;
int var_8 = 686159027;
unsigned long long int var_9 = 16780892080921045021ULL;
int var_10 = 2110438026;
unsigned short var_11 = (unsigned short)49718;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_16 = (short)-12593;
int var_17 = 64940197;
unsigned char var_18 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
