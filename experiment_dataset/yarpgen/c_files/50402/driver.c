#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2018527213U;
unsigned char var_2 = (unsigned char)192;
unsigned short var_3 = (unsigned short)31567;
unsigned long long int var_4 = 10569194230491262768ULL;
unsigned int var_5 = 1556550411U;
unsigned short var_6 = (unsigned short)18324;
signed char var_8 = (signed char)120;
int zero = 0;
unsigned short var_10 = (unsigned short)15226;
unsigned int var_11 = 331717113U;
unsigned int var_12 = 3667729908U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
