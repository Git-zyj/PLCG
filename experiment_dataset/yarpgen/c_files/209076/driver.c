#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)166;
unsigned char var_2 = (unsigned char)199;
unsigned long long int var_3 = 3031232505684310071ULL;
unsigned char var_10 = (unsigned char)121;
unsigned int var_11 = 2766532229U;
int zero = 0;
unsigned char var_14 = (unsigned char)132;
int var_15 = -920149643;
unsigned int var_16 = 4223718897U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
