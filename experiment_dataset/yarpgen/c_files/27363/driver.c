#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
unsigned char var_2 = (unsigned char)200;
unsigned char var_5 = (unsigned char)36;
int zero = 0;
unsigned char var_12 = (unsigned char)193;
unsigned char var_13 = (unsigned char)194;
unsigned char var_14 = (unsigned char)64;
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
