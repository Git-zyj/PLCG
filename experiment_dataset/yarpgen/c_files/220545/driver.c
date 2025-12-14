#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1402441216;
unsigned long long int var_2 = 9361166102868707473ULL;
unsigned char var_3 = (unsigned char)73;
unsigned long long int var_4 = 15497684848426544458ULL;
unsigned short var_7 = (unsigned short)30011;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_10 = (short)3562;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)4;
unsigned char var_13 = (unsigned char)143;
short var_14 = (short)-7211;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
