#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
signed char var_1 = (signed char)65;
unsigned int var_2 = 102516919U;
unsigned int var_8 = 3084341116U;
signed char var_9 = (signed char)35;
int var_12 = -305929500;
unsigned int var_13 = 3025265613U;
int var_15 = 2069081762;
unsigned int var_16 = 1999471819U;
unsigned int var_17 = 1905429097U;
int zero = 0;
unsigned short var_19 = (unsigned short)53932;
unsigned char var_20 = (unsigned char)172;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
