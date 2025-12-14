#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned short var_7 = (unsigned short)4729;
int var_8 = 1042000410;
unsigned char var_10 = (unsigned char)196;
unsigned int var_15 = 1698005708U;
int zero = 0;
unsigned char var_18 = (unsigned char)60;
unsigned char var_19 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
