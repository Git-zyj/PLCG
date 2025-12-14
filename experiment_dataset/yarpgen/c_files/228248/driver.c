#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)63206;
unsigned long long int var_13 = 1204086776923065069ULL;
int var_15 = 302652756;
unsigned int var_16 = 3909301047U;
int zero = 0;
unsigned int var_19 = 3536064330U;
short var_20 = (short)16621;
int var_21 = 671569769;
unsigned int var_22 = 862050687U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
