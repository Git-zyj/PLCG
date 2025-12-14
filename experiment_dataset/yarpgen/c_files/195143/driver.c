#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1382950792U;
int var_2 = 1268737360;
unsigned int var_5 = 4059855149U;
signed char var_8 = (signed char)35;
long long int var_11 = -8352533136578439356LL;
unsigned int var_13 = 521861907U;
int zero = 0;
signed char var_16 = (signed char)113;
long long int var_17 = -6969988098330246491LL;
unsigned int var_18 = 3785143062U;
long long int var_19 = -6803027439676896618LL;
long long int var_20 = 809282543115968612LL;
int var_21 = -165765948;
int var_22 = -1837325954;
int arr_0 [23] ;
signed char arr_2 [23] ;
signed char arr_3 [11] ;
unsigned int arr_6 [11] ;
long long int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 711037450;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-98 : (signed char)87;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2820477439U : 3369613141U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 5639568137657247258LL : 4963080482292004474LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
