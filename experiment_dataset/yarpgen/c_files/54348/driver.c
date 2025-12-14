#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 99778776750978193ULL;
unsigned int var_3 = 4186474608U;
unsigned long long int var_6 = 17692369859574829157ULL;
unsigned int var_8 = 4291726509U;
int var_9 = 1645421761;
unsigned short var_11 = (unsigned short)62685;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)94;
long long int var_17 = 6360859669174989933LL;
long long int var_18 = -8771480649601587697LL;
int zero = 0;
unsigned char var_19 = (unsigned char)77;
signed char var_20 = (signed char)60;
_Bool var_21 = (_Bool)1;
int var_22 = -2016329895;
long long int var_23 = 4984876207662630910LL;
signed char var_24 = (signed char)31;
short var_25 = (short)24654;
unsigned long long int var_26 = 4974750458825785457ULL;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 2990961250U;
int var_29 = -1106626565;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 1165142596U;
unsigned int var_32 = 307590298U;
unsigned long long int var_33 = 15214510578031762752ULL;
signed char var_34 = (signed char)25;
unsigned short var_35 = (unsigned short)8549;
unsigned char arr_0 [19] ;
signed char arr_1 [19] ;
_Bool arr_2 [19] [19] ;
signed char arr_3 [19] ;
unsigned char arr_5 [19] [19] ;
unsigned int arr_6 [19] ;
unsigned short arr_10 [19] [19] ;
_Bool arr_11 [19] ;
int arr_12 [19] [19] ;
unsigned short arr_14 [13] ;
short arr_19 [13] [13] ;
unsigned int arr_7 [19] ;
long long int arr_8 [19] ;
unsigned long long int arr_13 [19] ;
long long int arr_17 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 2765085181U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)3250;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = -1715037588;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (unsigned short)3577;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (short)6543;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 3439039657U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = -777695800626081006LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 7045184176989201344ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 3941062891730959682LL;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
