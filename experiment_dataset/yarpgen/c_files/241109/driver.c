#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-92;
unsigned int var_5 = 2179863511U;
signed char var_9 = (signed char)-102;
int var_10 = -933500553;
unsigned long long int var_11 = 17910074713529646433ULL;
signed char var_12 = (signed char)-121;
int zero = 0;
unsigned long long int var_13 = 3003208057648583011ULL;
unsigned int var_14 = 2479721009U;
unsigned int var_15 = 244518142U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
