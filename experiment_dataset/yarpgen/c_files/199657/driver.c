#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 644532758U;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-5582;
unsigned long long int var_6 = 6117627665782429570ULL;
unsigned char var_8 = (unsigned char)224;
short var_10 = (short)7092;
unsigned short var_11 = (unsigned short)62558;
int var_12 = 691451088;
unsigned char var_13 = (unsigned char)149;
long long int var_14 = 1705642705885003851LL;
unsigned char var_15 = (unsigned char)3;
int zero = 0;
signed char var_19 = (signed char)-96;
short var_20 = (short)873;
short var_21 = (short)10230;
unsigned int var_22 = 2418312533U;
unsigned char var_23 = (unsigned char)123;
int var_24 = 542510571;
unsigned short var_25 = (unsigned short)64659;
signed char var_26 = (signed char)12;
int var_27 = -1692340299;
long long int var_28 = -7724772579505040704LL;
unsigned char var_29 = (unsigned char)27;
unsigned short var_30 = (unsigned short)63878;
unsigned int var_31 = 3198630316U;
_Bool var_32 = (_Bool)0;
signed char arr_1 [10] [10] ;
unsigned short arr_2 [10] ;
signed char arr_3 [10] [10] [10] ;
int arr_4 [10] ;
_Bool arr_5 [10] ;
_Bool arr_6 [10] ;
_Bool arr_7 [10] ;
signed char arr_8 [10] [10] ;
int arr_10 [10] [10] [10] [10] ;
int arr_11 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)10785;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -1624198403;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -1313468453;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1166159154 : 541682939;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
