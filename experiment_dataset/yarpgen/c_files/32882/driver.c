#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)173;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 9758652788895777949ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 2455061783U;
unsigned int var_7 = 1642316007U;
long long int var_8 = 1504304097858258120LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)37069;
short var_12 = (short)-3127;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1357705548U;
unsigned char arr_0 [10] ;
unsigned short arr_1 [10] ;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)31418;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-118;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
