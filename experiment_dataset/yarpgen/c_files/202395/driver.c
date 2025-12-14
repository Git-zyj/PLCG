#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8212385448624428872LL;
long long int var_3 = 3259516337238012697LL;
long long int var_5 = 3313415584539698708LL;
long long int var_6 = -267453138064318642LL;
long long int var_7 = 4416781670080075441LL;
short var_8 = (short)-11198;
signed char var_9 = (signed char)-22;
unsigned char var_10 = (unsigned char)148;
long long int var_13 = 6113061945766754955LL;
short var_14 = (short)13832;
unsigned char var_15 = (unsigned char)182;
int zero = 0;
long long int var_17 = -2417414871401461547LL;
long long int var_18 = -6833062098339817243LL;
unsigned char var_19 = (unsigned char)99;
signed char var_20 = (signed char)52;
unsigned int var_21 = 3514787307U;
unsigned char var_22 = (unsigned char)146;
short arr_22 [13] ;
unsigned char arr_23 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (short)-16849 : (short)29193;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)128 : (unsigned char)23;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
