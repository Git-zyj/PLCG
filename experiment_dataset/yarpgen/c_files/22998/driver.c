#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-122;
long long int var_4 = 6589320282979040805LL;
unsigned char var_7 = (unsigned char)78;
unsigned char var_9 = (unsigned char)176;
int zero = 0;
unsigned short var_12 = (unsigned short)45925;
unsigned int var_13 = 4034171713U;
void init() {
}

void checksum() {
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
