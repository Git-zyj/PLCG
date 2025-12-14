#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)697;
short var_2 = (short)10388;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)60788;
long long int var_5 = -6739801726991723437LL;
unsigned short var_7 = (unsigned short)12727;
unsigned short var_8 = (unsigned short)10218;
unsigned long long int var_10 = 9056001669105129589ULL;
int zero = 0;
int var_11 = -1914062627;
unsigned short var_12 = (unsigned short)49047;
long long int var_13 = 654868329413735981LL;
unsigned int var_14 = 1079084230U;
unsigned long long int var_15 = 9384893329131320098ULL;
unsigned char var_16 = (unsigned char)132;
unsigned int var_17 = 708756899U;
int var_18 = -1227617530;
signed char arr_1 [18] ;
_Bool arr_4 [18] ;
long long int arr_5 [18] ;
unsigned int arr_7 [19] ;
unsigned short arr_8 [19] ;
unsigned short arr_13 [19] [19] ;
unsigned char arr_18 [19] ;
unsigned char arr_22 [19] ;
int arr_23 [19] [19] [19] [19] ;
short arr_19 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -9121611057823296950LL : -2172169647964820008LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 3728212695U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned short)13027;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)62426 : (unsigned short)10419;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned char)82 : (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = -1059492565;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)-1881 : (short)2918;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
