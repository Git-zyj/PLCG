#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)27;
unsigned long long int var_1 = 14353797366120126010ULL;
_Bool var_2 = (_Bool)0;
int var_3 = -411165535;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 4028055203U;
signed char var_6 = (signed char)-53;
int var_7 = 248156797;
int var_8 = -1622922552;
int var_9 = -1312526660;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)4043;
int zero = 0;
int var_12 = 1530316012;
unsigned char var_13 = (unsigned char)27;
int var_14 = -667872933;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
