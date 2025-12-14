#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11491;
long long int var_2 = 8727046440421691874LL;
unsigned int var_4 = 2392353634U;
unsigned short var_6 = (unsigned short)58708;
unsigned int var_8 = 2846063556U;
unsigned long long int var_9 = 4849150889742251131ULL;
unsigned short var_10 = (unsigned short)49759;
signed char var_11 = (signed char)80;
unsigned long long int var_12 = 11845457373703770921ULL;
unsigned long long int var_13 = 13516422009562688578ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -5729113700657122299LL;
int zero = 0;
unsigned short var_16 = (unsigned short)44269;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 2674538605927693476ULL;
short var_19 = (short)-11331;
signed char var_20 = (signed char)-90;
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
