#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 1639837899U;
signed char var_13 = (signed char)-83;
unsigned char var_14 = (unsigned char)28;
long long int var_16 = 1520111620193384711LL;
int zero = 0;
signed char var_19 = (signed char)12;
int var_20 = 1984069704;
unsigned long long int var_21 = 2725695385019347967ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
