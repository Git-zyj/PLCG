#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -831434659;
int var_4 = -667558127;
unsigned long long int var_6 = 1837453304843206915ULL;
int zero = 0;
unsigned int var_12 = 153984112U;
unsigned int var_13 = 1812124883U;
unsigned short var_14 = (unsigned short)55769;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
