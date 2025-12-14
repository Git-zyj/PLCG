#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)7598;
signed char var_9 = (signed char)-120;
unsigned int var_10 = 3488451638U;
int zero = 0;
long long int var_14 = 6354701690331011475LL;
unsigned char var_15 = (unsigned char)86;
unsigned char var_16 = (unsigned char)71;
unsigned short var_17 = (unsigned short)44025;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
