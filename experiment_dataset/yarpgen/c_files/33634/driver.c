#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1139467350;
unsigned short var_2 = (unsigned short)39409;
int var_3 = -455624735;
unsigned int var_4 = 77450090U;
unsigned int var_7 = 721834932U;
int var_8 = -1737326445;
unsigned short var_11 = (unsigned short)46557;
int zero = 0;
unsigned int var_14 = 2314037786U;
unsigned int var_15 = 157271362U;
unsigned short var_16 = (unsigned short)24745;
unsigned short var_17 = (unsigned short)6642;
unsigned int var_18 = 1959770033U;
unsigned int var_19 = 7534763U;
unsigned int var_20 = 248015869U;
unsigned short var_21 = (unsigned short)36551;
unsigned short var_22 = (unsigned short)62065;
unsigned short var_23 = (unsigned short)53161;
unsigned short var_24 = (unsigned short)1558;
unsigned short var_25 = (unsigned short)43465;
unsigned short var_26 = (unsigned short)26780;
int var_27 = -1370251060;
unsigned short var_28 = (unsigned short)39067;
unsigned short var_29 = (unsigned short)2733;
unsigned int arr_0 [24] ;
unsigned int arr_1 [24] ;
unsigned int arr_2 [24] [24] ;
unsigned short arr_3 [24] ;
int arr_4 [24] [24] [24] ;
unsigned short arr_5 [24] [24] ;
unsigned int arr_6 [24] [24] [24] ;
unsigned int arr_8 [24] [24] [24] ;
int arr_9 [24] [24] ;
unsigned short arr_12 [24] [24] [24] [24] ;
unsigned short arr_14 [12] [12] ;
unsigned short arr_16 [12] [12] ;
unsigned short arr_7 [24] ;
unsigned int arr_13 [24] [24] [24] [24] ;
unsigned int arr_19 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1749684655U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 818395631U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1761538671U : 3157052550U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)17092;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -559743000;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)1035;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1423070473U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2688392385U : 1534599106U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 909006366 : 229045288;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)48605;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)1155;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)41906 : (unsigned short)9427;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5575 : (unsigned short)55644;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2393355544U : 1229036166U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 3898418226U;
}

void checksum() {
    hash(&seed, var_14);
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
