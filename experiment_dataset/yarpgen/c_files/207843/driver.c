#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9334605401320152272ULL;
unsigned short var_2 = (unsigned short)28482;
unsigned short var_3 = (unsigned short)64482;
unsigned char var_4 = (unsigned char)116;
unsigned long long int var_5 = 9648168666194409924ULL;
signed char var_6 = (signed char)-28;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)14496;
unsigned int var_10 = 3686930304U;
unsigned int var_11 = 3659250981U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2619947824U;
unsigned int var_14 = 4035478795U;
signed char var_15 = (signed char)3;
unsigned short var_16 = (unsigned short)21930;
unsigned long long int var_17 = 3144886616413462447ULL;
unsigned int var_18 = 4012180802U;
unsigned short var_19 = (unsigned short)29198;
signed char var_20 = (signed char)-31;
int var_21 = -1472848684;
unsigned long long int var_22 = 3385984392596056125ULL;
unsigned char var_23 = (unsigned char)42;
unsigned char var_24 = (unsigned char)33;
long long int var_25 = 4856968681077368866LL;
long long int var_26 = -5628270857506358706LL;
unsigned short arr_0 [18] ;
signed char arr_1 [18] [18] ;
unsigned short arr_3 [18] ;
unsigned long long int arr_7 [18] [18] [18] ;
unsigned int arr_11 [18] ;
short arr_13 [18] [18] ;
unsigned int arr_15 [20] ;
unsigned char arr_16 [20] ;
unsigned char arr_17 [20] ;
_Bool arr_2 [18] ;
unsigned int arr_5 [18] [18] ;
unsigned int arr_9 [18] [18] [18] ;
long long int arr_14 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7003 : (unsigned short)20178;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)108 : (signed char)-55;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)25965;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 5783256934543838498ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 1250545361U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)17100 : (short)-4324;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = 3827506503U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)58 : (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1454019147U : 1864841821U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2883527924U : 942824198U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 8746498202950796736LL : -4369880706285641788LL;
}

void checksum() {
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
