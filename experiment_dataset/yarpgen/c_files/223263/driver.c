#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -850079880;
_Bool var_1 = (_Bool)0;
long long int var_2 = 5619818001511226303LL;
short var_8 = (short)19665;
int var_10 = -2123237225;
unsigned short var_11 = (unsigned short)1932;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)-8582;
long long int var_19 = 4122271734556518156LL;
short var_20 = (short)2346;
long long int var_21 = -1687108949851376029LL;
int var_22 = 1726421325;
int var_23 = 102386890;
int var_24 = -1379013045;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)95;
int var_27 = -1872288868;
signed char var_28 = (signed char)109;
long long int var_29 = -826084436033355692LL;
_Bool var_30 = (_Bool)0;
int var_31 = -755590342;
int arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
long long int arr_3 [15] ;
signed char arr_5 [24] ;
long long int arr_6 [24] [24] ;
long long int arr_7 [24] ;
unsigned long long int arr_10 [24] [24] [24] [24] ;
unsigned short arr_11 [24] [24] ;
short arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -1890661351;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)27405;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -3135108412135006961LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = -6890385763807152850LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -1027414201261597697LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 8159961842803408498ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)30424;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-693;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
