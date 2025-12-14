#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55760;
unsigned int var_6 = 1605000606U;
unsigned char var_8 = (unsigned char)11;
unsigned short var_13 = (unsigned short)48990;
short var_15 = (short)-19027;
unsigned int var_16 = 4119318046U;
int var_18 = -879426231;
int zero = 0;
int var_19 = -1361938005;
short var_20 = (short)31070;
unsigned long long int var_21 = 18101057295945252985ULL;
signed char var_22 = (signed char)-44;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
