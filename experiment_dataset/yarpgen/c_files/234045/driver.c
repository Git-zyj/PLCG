#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)85;
unsigned char var_14 = (unsigned char)101;
unsigned char var_15 = (unsigned char)94;
long long int var_16 = 9077935151510605626LL;
int zero = 0;
long long int var_20 = 3506710556002064562LL;
long long int var_21 = 5330037030311395247LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
