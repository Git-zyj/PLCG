#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1255;
short var_6 = (short)10603;
unsigned char var_11 = (unsigned char)89;
unsigned int var_14 = 1990369500U;
int zero = 0;
unsigned long long int var_18 = 15771122978153441908ULL;
short var_19 = (short)22312;
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
