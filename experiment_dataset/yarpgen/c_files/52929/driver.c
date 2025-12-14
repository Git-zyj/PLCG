#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3662627366489260106LL;
int var_3 = -2051136096;
unsigned char var_9 = (unsigned char)196;
long long int var_11 = -7121760636016533320LL;
unsigned int var_12 = 1918322443U;
int zero = 0;
short var_15 = (short)16450;
unsigned char var_16 = (unsigned char)206;
long long int var_17 = -1929623047784134953LL;
short var_18 = (short)-28919;
unsigned char var_19 = (unsigned char)158;
short var_20 = (short)-1572;
unsigned int var_21 = 2587611477U;
signed char var_22 = (signed char)-81;
short var_23 = (short)18133;
long long int var_24 = 8258352269251000825LL;
unsigned char arr_1 [13] [13] ;
short arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (short)-22493;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
