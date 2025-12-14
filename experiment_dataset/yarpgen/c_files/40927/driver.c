#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39727;
unsigned long long int var_5 = 8183765981573687540ULL;
unsigned char var_6 = (unsigned char)27;
int zero = 0;
unsigned int var_13 = 2038007834U;
unsigned long long int var_14 = 2751649781830997550ULL;
unsigned long long int var_15 = 17417467864735924837ULL;
signed char var_16 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
