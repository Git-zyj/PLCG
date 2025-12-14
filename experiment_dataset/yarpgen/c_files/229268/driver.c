#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
unsigned long long int var_2 = 8293876333337869283ULL;
signed char var_3 = (signed char)-78;
int var_5 = -226815201;
unsigned long long int var_18 = 267401272147145897ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)237;
unsigned short var_21 = (unsigned short)7015;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
