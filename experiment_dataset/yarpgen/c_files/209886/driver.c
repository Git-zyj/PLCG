#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2145897922;
unsigned char var_3 = (unsigned char)237;
int zero = 0;
unsigned long long int var_10 = 16499645864445885931ULL;
unsigned short var_11 = (unsigned short)6647;
signed char var_12 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
