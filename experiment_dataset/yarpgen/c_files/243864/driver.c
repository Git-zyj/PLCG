#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9105720528230035496ULL;
_Bool var_1 = (_Bool)1;
unsigned int var_4 = 558841678U;
signed char var_8 = (signed char)-22;
unsigned long long int var_9 = 2784034857920275783ULL;
int zero = 0;
int var_10 = 1964469094;
unsigned char var_11 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
