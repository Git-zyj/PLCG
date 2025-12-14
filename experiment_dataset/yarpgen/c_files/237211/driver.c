#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4103690655388362127ULL;
short var_2 = (short)29813;
signed char var_3 = (signed char)49;
_Bool var_6 = (_Bool)1;
signed char var_11 = (signed char)-115;
signed char var_12 = (signed char)9;
short var_13 = (short)20048;
unsigned char var_15 = (unsigned char)17;
short var_16 = (short)7530;
int zero = 0;
int var_17 = -1237280432;
unsigned char var_18 = (unsigned char)148;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-11635;
void init() {
}

void checksum() {
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
