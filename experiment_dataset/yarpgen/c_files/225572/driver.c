#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1717408473;
long long int var_4 = 7027881425663557438LL;
signed char var_11 = (signed char)2;
int zero = 0;
unsigned int var_15 = 428145973U;
long long int var_16 = -5620185121813127064LL;
void init() {
}

void checksum() {
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
