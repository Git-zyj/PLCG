#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2030768920U;
int var_5 = 1008814845;
unsigned long long int var_9 = 12784102478313622389ULL;
int zero = 0;
signed char var_16 = (signed char)-115;
unsigned short var_17 = (unsigned short)43422;
void init() {
}

void checksum() {
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
