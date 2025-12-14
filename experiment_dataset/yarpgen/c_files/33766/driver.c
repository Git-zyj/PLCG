#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3464063792U;
unsigned int var_3 = 909351100U;
signed char var_4 = (signed char)-80;
unsigned int var_8 = 3414750419U;
int zero = 0;
unsigned short var_11 = (unsigned short)34337;
int var_12 = 87383382;
unsigned int var_13 = 1302708074U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
