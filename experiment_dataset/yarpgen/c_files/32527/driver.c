#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3461444737U;
unsigned char var_10 = (unsigned char)60;
unsigned int var_11 = 621277879U;
unsigned char var_12 = (unsigned char)95;
int zero = 0;
int var_17 = -1770238911;
unsigned char var_18 = (unsigned char)123;
void init() {
}

void checksum() {
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
