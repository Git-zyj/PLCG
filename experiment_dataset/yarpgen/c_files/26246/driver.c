#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2140233730U;
unsigned char var_11 = (unsigned char)99;
unsigned char var_12 = (unsigned char)208;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 2062033173U;
short var_19 = (short)8645;
unsigned int var_20 = 2450075223U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
