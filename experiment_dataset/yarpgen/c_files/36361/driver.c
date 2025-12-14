#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7491398486223297389LL;
unsigned int var_1 = 473174634U;
signed char var_2 = (signed char)-28;
long long int var_8 = -1742229166704973979LL;
long long int var_10 = -4993079796171861344LL;
int zero = 0;
unsigned char var_11 = (unsigned char)247;
int var_12 = 1712572257;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
