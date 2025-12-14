#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-286;
signed char var_1 = (signed char)-118;
unsigned short var_2 = (unsigned short)14121;
short var_3 = (short)-12200;
signed char var_5 = (signed char)66;
unsigned short var_6 = (unsigned short)60843;
short var_7 = (short)-17223;
int var_8 = 302474143;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)16581;
int var_12 = 2049613303;
unsigned long long int var_13 = 15410163614073571358ULL;
unsigned long long int var_14 = 3172662328752779368ULL;
unsigned long long int var_15 = 2547470523464919342ULL;
unsigned long long int var_16 = 1687725181972867343ULL;
unsigned char var_17 = (unsigned char)151;
int var_18 = 1967702505;
long long int var_19 = 2507124484748688153LL;
unsigned long long int var_20 = 17108127925686487028ULL;
int var_21 = -532507440;
signed char arr_1 [17] ;
long long int arr_2 [17] ;
_Bool arr_3 [17] [17] ;
unsigned long long int arr_5 [17] ;
unsigned short arr_6 [10] ;
signed char arr_8 [10] [10] ;
long long int arr_13 [10] [10] ;
int arr_14 [10] [10] ;
unsigned short arr_10 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 5948042800479644098LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 14837660143942099443ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)63630;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = -2558653122328412455LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = -2004756406;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)25066;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
