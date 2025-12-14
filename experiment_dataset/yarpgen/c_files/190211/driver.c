#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_8 = (unsigned short)26658;
int zero = 0;
unsigned short var_12 = (unsigned short)7307;
short var_13 = (short)-18472;
int var_14 = 1148457814;
signed char var_15 = (signed char)48;
unsigned long long int var_16 = 16017291149929669663ULL;
long long int var_17 = -7168183315997412192LL;
signed char var_18 = (signed char)-34;
short var_19 = (short)16834;
unsigned short var_20 = (unsigned short)36324;
unsigned long long int var_21 = 3346544016230933797ULL;
unsigned short var_22 = (unsigned short)45236;
int var_23 = 2100043372;
long long int var_24 = 3636637798040198340LL;
int var_25 = 571695435;
long long int var_26 = -5406365777962923591LL;
short var_27 = (short)-29456;
unsigned char var_28 = (unsigned char)146;
unsigned short var_29 = (unsigned short)32668;
unsigned char var_30 = (unsigned char)104;
long long int var_31 = -2009890332629066317LL;
signed char var_32 = (signed char)-61;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
