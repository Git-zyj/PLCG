#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11643624777143026007ULL;
unsigned short var_1 = (unsigned short)56089;
unsigned short var_2 = (unsigned short)57746;
int zero = 0;
unsigned char var_13 = (unsigned char)49;
signed char var_14 = (signed char)12;
unsigned int var_15 = 243064233U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
