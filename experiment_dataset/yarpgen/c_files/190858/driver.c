#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -229717590845602285LL;
unsigned int var_10 = 2745765150U;
unsigned int var_17 = 1587016002U;
int zero = 0;
int var_19 = 1701473558;
unsigned short var_20 = (unsigned short)16402;
unsigned short var_21 = (unsigned short)31116;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
