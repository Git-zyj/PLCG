#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned int var_12 = 51711757U;
unsigned char var_13 = (unsigned char)151;
unsigned short var_14 = (unsigned short)10968;
unsigned char var_15 = (unsigned char)170;
unsigned short var_16 = (unsigned short)4216;
unsigned short var_17 = (unsigned short)25668;
short var_18 = (short)-30828;
unsigned short var_19 = (unsigned short)36850;
unsigned short var_20 = (unsigned short)50892;
unsigned long long int var_21 = 7168268178271464322ULL;
signed char var_22 = (signed char)-114;
unsigned short var_23 = (unsigned short)59459;
unsigned char var_24 = (unsigned char)41;
signed char var_25 = (signed char)14;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
