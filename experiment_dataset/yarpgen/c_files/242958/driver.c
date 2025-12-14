#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13248369652350743569ULL;
unsigned char var_2 = (unsigned char)207;
unsigned short var_7 = (unsigned short)12465;
unsigned int var_8 = 1670025823U;
unsigned char var_9 = (unsigned char)55;
unsigned char var_11 = (unsigned char)235;
unsigned short var_13 = (unsigned short)44423;
short var_14 = (short)9024;
unsigned short var_16 = (unsigned short)61036;
int zero = 0;
short var_17 = (short)-17911;
short var_18 = (short)29876;
short var_19 = (short)-16293;
signed char var_20 = (signed char)1;
int var_21 = 2018275716;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
