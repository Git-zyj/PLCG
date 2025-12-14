#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)242;
short var_8 = (short)-1122;
int zero = 0;
unsigned int var_11 = 3936616287U;
unsigned char var_12 = (unsigned char)91;
long long int var_13 = 2584222774735019304LL;
unsigned char var_14 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
