#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26822;
unsigned char var_2 = (unsigned char)227;
unsigned short var_3 = (unsigned short)55436;
signed char var_6 = (signed char)73;
unsigned char var_8 = (unsigned char)189;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-23801;
int zero = 0;
unsigned long long int var_12 = 9157866678878150433ULL;
int var_13 = 715639839;
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
