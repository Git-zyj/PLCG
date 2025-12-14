#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)4;
short var_5 = (short)-17451;
signed char var_6 = (signed char)-20;
signed char var_7 = (signed char)-19;
unsigned short var_9 = (unsigned short)37703;
int var_10 = 128448646;
signed char var_11 = (signed char)-61;
unsigned int var_12 = 4154071276U;
unsigned char var_13 = (unsigned char)247;
unsigned long long int var_14 = 14134732404968141220ULL;
int var_15 = 1140561840;
int zero = 0;
unsigned long long int var_16 = 5744842937666044552ULL;
int var_17 = 1343015760;
unsigned int var_18 = 778355295U;
unsigned short var_19 = (unsigned short)54979;
int var_20 = -963228608;
unsigned long long int var_21 = 4669136905048855055ULL;
unsigned int var_22 = 1833590109U;
unsigned short arr_1 [16] ;
unsigned int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)63838;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 667578851U : 971576305U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
