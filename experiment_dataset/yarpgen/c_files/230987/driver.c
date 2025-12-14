#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2308663803U;
unsigned int var_1 = 3780867237U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-24379;
short var_5 = (short)19398;
short var_6 = (short)11948;
short var_7 = (short)19499;
signed char var_9 = (signed char)69;
signed char var_10 = (signed char)-20;
short var_12 = (short)22730;
long long int var_13 = 2954444143638580659LL;
short var_14 = (short)10297;
unsigned int var_16 = 4284753008U;
int zero = 0;
unsigned int var_17 = 917575181U;
unsigned int var_18 = 3770616545U;
short var_19 = (short)7889;
short var_20 = (short)29392;
short var_21 = (short)-1776;
short arr_0 [14] ;
short arr_2 [14] [14] ;
short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)30271;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-17192;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)-20907;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
