#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
long long int var_1 = 1353468215007484024LL;
unsigned short var_2 = (unsigned short)45502;
signed char var_4 = (signed char)68;
unsigned long long int var_5 = 4906419049199610764ULL;
signed char var_7 = (signed char)-84;
unsigned long long int var_8 = 17899656612926307580ULL;
int var_9 = 1381474183;
unsigned long long int var_10 = 5290938063779837131ULL;
unsigned long long int var_11 = 10294647941221635810ULL;
unsigned char var_12 = (unsigned char)29;
unsigned long long int var_13 = 1238806557990294132ULL;
int zero = 0;
signed char var_14 = (signed char)-51;
long long int var_15 = 1622608700081429358LL;
signed char var_16 = (signed char)-126;
unsigned long long int var_17 = 9289972236781016748ULL;
int var_18 = 2023149243;
unsigned short var_19 = (unsigned short)33371;
unsigned char var_20 = (unsigned char)151;
signed char arr_0 [18] ;
unsigned short arr_1 [18] ;
signed char arr_2 [18] ;
long long int arr_4 [18] ;
long long int arr_10 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)46593;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 6001824470190041410LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 4453587312411398928LL : -7485053631377251180LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
