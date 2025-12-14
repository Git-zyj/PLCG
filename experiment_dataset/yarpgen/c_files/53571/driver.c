#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6633;
short var_2 = (short)-649;
long long int var_6 = 6674048890293752236LL;
unsigned short var_9 = (unsigned short)58816;
unsigned int var_10 = 769578012U;
int zero = 0;
signed char var_12 = (signed char)27;
long long int var_13 = -6162619022522428885LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
