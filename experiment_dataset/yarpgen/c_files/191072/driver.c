#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11598659917160503119ULL;
unsigned int var_3 = 2013867286U;
unsigned long long int var_6 = 6028957597951274482ULL;
short var_7 = (short)11616;
long long int var_9 = 267510391559801399LL;
int zero = 0;
unsigned char var_10 = (unsigned char)194;
unsigned long long int var_11 = 228943183009868742ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
