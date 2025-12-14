#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16032;
unsigned int var_2 = 3635090073U;
long long int var_3 = -2755699883954028860LL;
unsigned int var_6 = 1437977190U;
long long int var_7 = 7440159626482623623LL;
unsigned short var_8 = (unsigned short)46785;
unsigned char var_9 = (unsigned char)17;
int zero = 0;
unsigned int var_11 = 2124996374U;
short var_12 = (short)883;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
