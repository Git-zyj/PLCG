#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2702952717U;
int var_6 = 1820727839;
unsigned short var_10 = (unsigned short)42108;
unsigned long long int var_11 = 3865793113837661326ULL;
short var_12 = (short)-7000;
short var_19 = (short)-24222;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)65014;
int var_22 = -873285835;
unsigned int var_23 = 3649401766U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
