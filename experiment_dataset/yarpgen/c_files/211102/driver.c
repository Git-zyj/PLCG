#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
long long int var_4 = -5289214581479409567LL;
signed char var_6 = (signed char)-99;
unsigned short var_7 = (unsigned short)38965;
unsigned long long int var_8 = 10427966439738188297ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)29276;
signed char var_12 = (signed char)-43;
signed char var_13 = (signed char)-116;
unsigned long long int var_14 = 12672772233833860473ULL;
unsigned char var_15 = (unsigned char)199;
unsigned long long int var_16 = 6600276921741195026ULL;
long long int var_17 = -8384988287818142584LL;
int var_18 = 855522070;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
