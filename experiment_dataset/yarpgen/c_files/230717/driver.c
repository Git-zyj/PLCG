#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6286375787473624268ULL;
unsigned int var_5 = 694618496U;
unsigned long long int var_9 = 4427673020188917442ULL;
long long int var_10 = 3484195302759708679LL;
signed char var_14 = (signed char)48;
signed char var_16 = (signed char)120;
int zero = 0;
unsigned char var_20 = (unsigned char)99;
unsigned int var_21 = 1453809659U;
signed char var_22 = (signed char)-82;
long long int var_23 = -5941686532555872788LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
