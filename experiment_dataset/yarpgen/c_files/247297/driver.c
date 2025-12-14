#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)88;
signed char var_9 = (signed char)50;
unsigned int var_11 = 3726775784U;
int zero = 0;
int var_12 = -2016705113;
unsigned int var_13 = 40861240U;
unsigned long long int var_14 = 7559086183119462955ULL;
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
