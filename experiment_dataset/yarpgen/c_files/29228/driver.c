#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)123;
unsigned int var_10 = 1956894667U;
unsigned char var_11 = (unsigned char)50;
int zero = 0;
unsigned char var_12 = (unsigned char)39;
int var_13 = -1195701271;
int var_14 = -904878194;
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
