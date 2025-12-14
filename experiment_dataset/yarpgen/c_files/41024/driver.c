#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5169;
short var_3 = (short)13741;
int var_8 = -645258816;
unsigned char var_11 = (unsigned char)20;
unsigned int var_12 = 1373857770U;
int zero = 0;
unsigned long long int var_13 = 18444504290177601160ULL;
unsigned short var_14 = (unsigned short)64883;
long long int var_15 = 5982316585038494027LL;
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
