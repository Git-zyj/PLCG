#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3456121955U;
unsigned char var_9 = (unsigned char)189;
unsigned long long int var_13 = 6038813866767109654ULL;
int zero = 0;
signed char var_14 = (signed char)-34;
long long int var_15 = -2004712743921359474LL;
unsigned char var_16 = (unsigned char)20;
int var_17 = 1267769015;
int var_18 = 5462589;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
