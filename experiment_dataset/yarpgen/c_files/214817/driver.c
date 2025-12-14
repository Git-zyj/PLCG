#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1684859041U;
unsigned long long int var_3 = 14309459199129392876ULL;
int var_7 = 1340388281;
unsigned char var_11 = (unsigned char)20;
long long int var_13 = -2865270468657492921LL;
int zero = 0;
unsigned long long int var_14 = 13719749336053193753ULL;
signed char var_15 = (signed char)-50;
void init() {
}

void checksum() {
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
