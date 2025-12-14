#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 266507750U;
unsigned int var_2 = 2422405571U;
long long int var_6 = 7582370838278839117LL;
unsigned int var_9 = 4210727741U;
unsigned int var_11 = 788018759U;
int zero = 0;
long long int var_13 = 1202386905677954988LL;
unsigned int var_14 = 3958047291U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
