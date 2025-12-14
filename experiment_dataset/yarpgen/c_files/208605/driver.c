#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5828027537262888025LL;
unsigned int var_2 = 46403003U;
unsigned char var_6 = (unsigned char)198;
unsigned long long int var_10 = 12373606227901279362ULL;
unsigned char var_11 = (unsigned char)176;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)106;
signed char var_16 = (signed char)79;
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
