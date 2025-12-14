#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2394875976385044311ULL;
unsigned short var_6 = (unsigned short)8180;
int var_7 = -1788633147;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-5065;
unsigned short var_14 = (unsigned short)22544;
unsigned char var_16 = (unsigned char)223;
unsigned short var_18 = (unsigned short)55875;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 10714064557168956861ULL;
signed char var_21 = (signed char)30;
unsigned int var_22 = 3906135145U;
void init() {
}

void checksum() {
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
