#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -889109100;
short var_2 = (short)28928;
signed char var_3 = (signed char)-9;
short var_4 = (short)12940;
unsigned int var_5 = 3556773561U;
unsigned char var_7 = (unsigned char)7;
long long int var_8 = -4283940006335163953LL;
signed char var_9 = (signed char)49;
unsigned char var_10 = (unsigned char)100;
int zero = 0;
unsigned char var_11 = (unsigned char)13;
unsigned short var_12 = (unsigned short)29374;
unsigned short var_13 = (unsigned short)28654;
unsigned int var_14 = 1751165721U;
signed char var_15 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
