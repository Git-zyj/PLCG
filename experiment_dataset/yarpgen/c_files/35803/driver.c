#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
unsigned long long int var_1 = 14225373370774915295ULL;
_Bool var_2 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned int var_15 = 4264178168U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 2291189904U;
unsigned int var_21 = 1164839932U;
unsigned long long int var_22 = 9853993439101256550ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
