#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-109;
long long int var_1 = 3357502190336820850LL;
unsigned char var_2 = (unsigned char)154;
unsigned char var_7 = (unsigned char)47;
unsigned int var_8 = 2479021520U;
int zero = 0;
unsigned int var_15 = 2521214784U;
signed char var_16 = (signed char)-71;
unsigned int var_17 = 3168566235U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
