#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1880085602;
signed char var_2 = (signed char)11;
long long int var_3 = -7838173046773738943LL;
int var_4 = 1518907452;
unsigned int var_5 = 1604216056U;
int var_6 = 2009644672;
_Bool var_7 = (_Bool)0;
long long int var_11 = -3216687308670424786LL;
unsigned int var_12 = 3748351459U;
int zero = 0;
unsigned long long int var_13 = 10605980963812015875ULL;
int var_14 = 164826695;
unsigned long long int var_15 = 9185889974021259520ULL;
int var_16 = 120014919;
unsigned char var_17 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
