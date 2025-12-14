#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30515;
int var_9 = 2056126696;
unsigned short var_10 = (unsigned short)37729;
unsigned int var_12 = 2753272031U;
signed char var_13 = (signed char)-21;
int zero = 0;
int var_16 = -457151493;
int var_17 = 2030996715;
unsigned char var_18 = (unsigned char)100;
int var_19 = 2064890652;
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
