#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 17851086350337553397ULL;
signed char var_10 = (signed char)-109;
unsigned char var_11 = (unsigned char)210;
int zero = 0;
unsigned long long int var_12 = 10690236750859665917ULL;
unsigned short var_13 = (unsigned short)22268;
short var_14 = (short)-32324;
unsigned short var_15 = (unsigned short)47791;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
