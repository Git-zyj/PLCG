#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8555762310878167142ULL;
unsigned int var_8 = 2634449781U;
long long int var_9 = -6330329498703906597LL;
int var_10 = -1658168227;
unsigned char var_14 = (unsigned char)25;
int zero = 0;
unsigned char var_16 = (unsigned char)216;
signed char var_17 = (signed char)-7;
short var_18 = (short)27647;
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
