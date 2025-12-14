#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
unsigned char var_1 = (unsigned char)45;
_Bool var_2 = (_Bool)0;
long long int var_5 = -3910196438497792388LL;
unsigned char var_6 = (unsigned char)86;
int var_7 = 163394124;
unsigned int var_8 = 3343816327U;
short var_9 = (short)8078;
short var_10 = (short)-23987;
unsigned char var_11 = (unsigned char)61;
unsigned short var_12 = (unsigned short)15677;
unsigned char var_13 = (unsigned char)103;
long long int var_14 = -3286523571370976979LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)7665;
unsigned short var_17 = (unsigned short)47929;
unsigned short var_18 = (unsigned short)64905;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
