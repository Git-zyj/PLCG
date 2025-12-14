#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9471948176407104610ULL;
signed char var_7 = (signed char)101;
unsigned char var_8 = (unsigned char)213;
unsigned char var_10 = (unsigned char)41;
int zero = 0;
unsigned char var_11 = (unsigned char)167;
unsigned int var_12 = 1209007558U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
