#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4530665142089116354LL;
long long int var_4 = -356747691265651246LL;
unsigned char var_5 = (unsigned char)99;
unsigned int var_6 = 2096538520U;
int var_13 = 1348032456;
int zero = 0;
unsigned long long int var_15 = 16438836568808018484ULL;
signed char var_16 = (signed char)-55;
unsigned long long int var_17 = 18333476831686611447ULL;
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
