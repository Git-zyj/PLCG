#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)225;
signed char var_2 = (signed char)-73;
short var_3 = (short)29061;
short var_8 = (short)-23979;
unsigned char var_9 = (unsigned char)195;
short var_10 = (short)3947;
unsigned int var_12 = 3582471759U;
short var_14 = (short)18076;
long long int var_15 = 1988068661768682662LL;
int zero = 0;
int var_16 = -1712723784;
unsigned int var_17 = 3552429895U;
int var_18 = 1175552497;
int var_19 = 2114775154;
unsigned int var_20 = 2334672634U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
