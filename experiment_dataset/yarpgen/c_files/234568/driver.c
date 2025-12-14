#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48559;
signed char var_1 = (signed char)36;
unsigned int var_7 = 4205711856U;
unsigned short var_14 = (unsigned short)5836;
long long int var_15 = -8394874866199560329LL;
int zero = 0;
unsigned long long int var_18 = 18241630749961282187ULL;
signed char var_19 = (signed char)-103;
unsigned int var_20 = 1745386938U;
int var_21 = 923139142;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
