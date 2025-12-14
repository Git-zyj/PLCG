#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)10041;
short var_9 = (short)30387;
unsigned long long int var_10 = 17171489545937004487ULL;
signed char var_11 = (signed char)-19;
short var_12 = (short)541;
int zero = 0;
unsigned short var_13 = (unsigned short)48129;
unsigned int var_14 = 4072130946U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
