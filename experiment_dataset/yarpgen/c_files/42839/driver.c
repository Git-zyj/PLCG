#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1843841506;
long long int var_4 = 6785151528423095209LL;
unsigned long long int var_5 = 3779153582677768601ULL;
unsigned short var_7 = (unsigned short)24787;
unsigned int var_9 = 2033846532U;
short var_12 = (short)-10033;
int var_16 = 1279005071;
int zero = 0;
long long int var_18 = -4121636577952483320LL;
_Bool var_19 = (_Bool)1;
int var_20 = 552372174;
long long int var_21 = 4629577172188621463LL;
signed char var_22 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
