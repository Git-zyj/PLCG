#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 120172421994320876ULL;
signed char var_6 = (signed char)66;
unsigned char var_8 = (unsigned char)16;
short var_9 = (short)12371;
int zero = 0;
unsigned char var_11 = (unsigned char)132;
int var_12 = 20208075;
unsigned long long int var_13 = 14199674252021935189ULL;
unsigned char var_14 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
