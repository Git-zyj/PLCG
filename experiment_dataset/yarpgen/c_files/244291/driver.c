#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16469;
unsigned short var_5 = (unsigned short)53762;
int var_7 = -271878677;
unsigned int var_9 = 3515868308U;
int zero = 0;
signed char var_11 = (signed char)44;
unsigned short var_12 = (unsigned short)36641;
unsigned int var_13 = 2138754784U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
