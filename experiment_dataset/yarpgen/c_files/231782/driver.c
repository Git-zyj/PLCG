#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7949478091220039627LL;
long long int var_6 = -8311466166376014368LL;
long long int var_13 = 7662139374867514503LL;
int zero = 0;
signed char var_19 = (signed char)-120;
unsigned char var_20 = (unsigned char)48;
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
