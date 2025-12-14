#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 10978483510029611347ULL;
unsigned int var_10 = 2886678252U;
unsigned int var_12 = 4048209959U;
unsigned short var_14 = (unsigned short)12986;
unsigned int var_19 = 246061902U;
int zero = 0;
unsigned short var_20 = (unsigned short)23225;
short var_21 = (short)19677;
unsigned long long int var_22 = 16563808672019492679ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
