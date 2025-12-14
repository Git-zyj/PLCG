#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)41095;
unsigned char var_6 = (unsigned char)42;
int var_12 = 185185521;
int zero = 0;
unsigned int var_14 = 151312219U;
long long int var_15 = -4670868020542513226LL;
int var_16 = 889412346;
long long int var_17 = -1723560953164432544LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
