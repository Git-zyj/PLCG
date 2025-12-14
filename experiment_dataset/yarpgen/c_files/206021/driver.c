#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5283;
unsigned char var_1 = (unsigned char)127;
short var_2 = (short)-11854;
unsigned long long int var_3 = 13215758930452489803ULL;
unsigned int var_4 = 2860944225U;
unsigned short var_7 = (unsigned short)56322;
unsigned char var_8 = (unsigned char)175;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 49467214U;
signed char var_13 = (signed char)-44;
unsigned long long int var_14 = 1015878711987389346ULL;
_Bool var_15 = (_Bool)0;
short var_17 = (short)1235;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)17568;
short var_20 = (short)28040;
signed char var_21 = (signed char)-29;
unsigned long long int var_22 = 3008633430235994671ULL;
short var_23 = (short)5600;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
