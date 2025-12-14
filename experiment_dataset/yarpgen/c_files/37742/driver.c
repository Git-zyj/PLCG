#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -699038004;
unsigned int var_13 = 2192486641U;
unsigned char var_16 = (unsigned char)60;
unsigned short var_19 = (unsigned short)23552;
int zero = 0;
int var_20 = 1098732560;
int var_21 = -236510310;
int var_22 = 418342506;
unsigned int var_23 = 3787795666U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
