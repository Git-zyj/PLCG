#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2592258325U;
unsigned char var_12 = (unsigned char)7;
int zero = 0;
unsigned char var_20 = (unsigned char)152;
long long int var_21 = 2592284092931889082LL;
unsigned char var_22 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
