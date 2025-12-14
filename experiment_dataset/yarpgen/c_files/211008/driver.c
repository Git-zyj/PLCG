#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2118967425;
int var_3 = 1097031171;
unsigned char var_5 = (unsigned char)47;
short var_10 = (short)-28133;
short var_12 = (short)-6787;
unsigned char var_13 = (unsigned char)133;
long long int var_15 = -8910333481595460182LL;
int var_16 = 1517649670;
int zero = 0;
unsigned char var_18 = (unsigned char)52;
_Bool var_19 = (_Bool)0;
int var_20 = -879108433;
unsigned int var_21 = 625597588U;
unsigned char var_22 = (unsigned char)132;
short var_23 = (short)-26370;
int arr_3 [23] [23] ;
int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 1602530019;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 2035731766;
}

void checksum() {
    hash(&seed, var_18);
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
