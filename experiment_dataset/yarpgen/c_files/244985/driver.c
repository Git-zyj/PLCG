#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)32170;
short var_4 = (short)-7686;
unsigned int var_8 = 684377518U;
unsigned long long int var_11 = 10454782725798342795ULL;
long long int var_12 = -2900602014113542430LL;
unsigned long long int var_14 = 426348293700440214ULL;
int var_17 = 919630723;
unsigned long long int var_18 = 17937143784327586191ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)71;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)60183;
unsigned short var_22 = (unsigned short)58328;
unsigned char var_23 = (unsigned char)39;
unsigned int var_24 = 717768443U;
signed char var_25 = (signed char)-8;
signed char var_26 = (signed char)3;
unsigned char var_27 = (unsigned char)122;
signed char var_28 = (signed char)-13;
unsigned short var_29 = (unsigned short)56255;
unsigned long long int arr_7 [20] [20] [20] [20] [20] ;
_Bool arr_8 [20] [20] [20] [20] ;
_Bool arr_12 [22] [22] ;
long long int arr_13 [22] [22] ;
unsigned short arr_15 [22] [22] [22] ;
signed char arr_17 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 12411032276203748113ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = -3135788005883470983LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)30903 : (unsigned short)10971;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)95 : (signed char)96;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
