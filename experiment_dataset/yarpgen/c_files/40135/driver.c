#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -268633147;
long long int var_4 = 415482984847685786LL;
unsigned int var_6 = 3663899801U;
int zero = 0;
short var_12 = (short)2148;
unsigned char var_13 = (unsigned char)206;
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
