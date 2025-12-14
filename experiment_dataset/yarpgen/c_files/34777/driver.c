#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)6;
long long int var_5 = -2278227643982118592LL;
signed char var_6 = (signed char)-41;
long long int var_10 = 7505480619177373405LL;
unsigned short var_12 = (unsigned short)65483;
signed char var_15 = (signed char)110;
int zero = 0;
long long int var_16 = 410574890142311946LL;
int var_17 = -1490812683;
unsigned short var_18 = (unsigned short)21801;
long long int var_19 = -8339858896971545186LL;
unsigned int var_20 = 664832544U;
unsigned short var_21 = (unsigned short)52366;
long long int var_22 = -2234349805702405799LL;
unsigned short arr_7 [24] [24] ;
unsigned int arr_8 [24] ;
signed char arr_10 [24] ;
unsigned short arr_11 [24] [24] ;
unsigned int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)50694;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 2531775058U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)25192;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1742172973U : 3199805326U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
