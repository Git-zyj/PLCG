#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
unsigned long long int var_1 = 11395824397663443481ULL;
int var_5 = -913461155;
unsigned long long int var_8 = 10034242682283475782ULL;
unsigned char var_12 = (unsigned char)8;
int var_17 = 1970159167;
int zero = 0;
int var_18 = -968027318;
int var_19 = 1026738214;
long long int var_20 = -3124248134297919874LL;
unsigned int var_21 = 2534445946U;
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
