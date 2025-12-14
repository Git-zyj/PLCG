#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14674969166338452358ULL;
int var_4 = 2072874484;
unsigned short var_5 = (unsigned short)15640;
unsigned char var_6 = (unsigned char)120;
long long int var_10 = -4944689886755564705LL;
int var_13 = 1139281861;
long long int var_14 = 1088635639715641898LL;
signed char var_15 = (signed char)-80;
long long int var_16 = -2616160982863541334LL;
unsigned long long int var_18 = 6557641267393338086ULL;
int zero = 0;
unsigned long long int var_19 = 15110396172993689064ULL;
int var_20 = 1533901023;
long long int var_21 = 8165500004291252877LL;
int var_22 = -679961251;
int var_23 = -1869274155;
int var_24 = 1769337628;
unsigned short var_25 = (unsigned short)54752;
unsigned int var_26 = 1598038603U;
signed char arr_0 [22] [22] ;
int arr_1 [22] [22] ;
long long int arr_2 [22] ;
signed char arr_3 [19] [19] ;
long long int arr_5 [19] [19] ;
int arr_6 [19] ;
short arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -174745704;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 8889609075443515048LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 3300275927172107939LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 2130510774;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (short)-2772;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
