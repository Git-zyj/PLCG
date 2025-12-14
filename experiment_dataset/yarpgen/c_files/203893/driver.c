#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60266;
unsigned short var_2 = (unsigned short)48376;
unsigned short var_3 = (unsigned short)19465;
long long int var_6 = -3648637251853165108LL;
int var_7 = -1958171015;
unsigned short var_8 = (unsigned short)56606;
unsigned short var_12 = (unsigned short)42385;
long long int var_13 = 8514312768794614134LL;
short var_15 = (short)-6669;
short var_16 = (short)2168;
long long int var_17 = -1974767149982202536LL;
int zero = 0;
int var_18 = 65117918;
unsigned int var_19 = 991753486U;
unsigned short var_20 = (unsigned short)34521;
signed char var_21 = (signed char)-64;
void init() {
}

void checksum() {
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
