#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19881;
unsigned char var_2 = (unsigned char)119;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 14274259739896977919ULL;
unsigned char var_9 = (unsigned char)92;
int zero = 0;
unsigned int var_11 = 653088570U;
unsigned char var_12 = (unsigned char)176;
unsigned char var_13 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
