#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 364402883;
unsigned char var_7 = (unsigned char)181;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-61;
signed char var_15 = (signed char)102;
int var_16 = 1381371991;
unsigned short var_17 = (unsigned short)33089;
signed char var_18 = (signed char)42;
unsigned long long int var_19 = 14005346001205930890ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-57;
int var_22 = -1981798428;
long long int var_23 = -8598618188671969766LL;
unsigned short var_24 = (unsigned short)26174;
signed char var_25 = (signed char)71;
short arr_0 [10] ;
unsigned short arr_3 [10] [10] ;
int arr_4 [10] ;
_Bool arr_5 [10] [10] [10] ;
signed char arr_7 [10] [10] [10] ;
unsigned char arr_11 [10] [10] [10] [10] ;
long long int arr_14 [10] ;
signed char arr_8 [10] [10] [10] [10] ;
unsigned long long int arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)24602;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)30212;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1208006072;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = 6685197335204720005LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = 9166741559440873519ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
