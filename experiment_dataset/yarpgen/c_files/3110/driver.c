#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29446;
unsigned int var_3 = 4290028248U;
unsigned short var_6 = (unsigned short)37519;
unsigned short var_7 = (unsigned short)11765;
unsigned short var_8 = (unsigned short)3845;
unsigned short var_10 = (unsigned short)14850;
int var_14 = 169123597;
int var_16 = 662412792;
unsigned int var_17 = 591661616U;
int zero = 0;
long long int var_19 = 364185562396036596LL;
unsigned short var_20 = (unsigned short)15518;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
