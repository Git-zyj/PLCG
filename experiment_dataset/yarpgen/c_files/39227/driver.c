#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)80;
signed char var_7 = (signed char)111;
int var_11 = 1478607880;
int zero = 0;
unsigned short var_14 = (unsigned short)13184;
signed char var_15 = (signed char)8;
unsigned int var_16 = 2442705243U;
void init() {
}

void checksum() {
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
