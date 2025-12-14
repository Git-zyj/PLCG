#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 518509232U;
unsigned char var_6 = (unsigned char)108;
unsigned long long int var_7 = 83677525085871725ULL;
signed char var_10 = (signed char)-59;
int zero = 0;
signed char var_12 = (signed char)3;
unsigned char var_13 = (unsigned char)211;
void init() {
}

void checksum() {
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
