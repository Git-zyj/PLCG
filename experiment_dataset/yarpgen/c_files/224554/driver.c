#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1747841257;
unsigned char var_12 = (unsigned char)138;
unsigned long long int var_13 = 13778571171788156343ULL;
int zero = 0;
unsigned int var_15 = 2459995388U;
short var_16 = (short)-7755;
unsigned short var_17 = (unsigned short)53250;
unsigned int var_18 = 164932144U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
