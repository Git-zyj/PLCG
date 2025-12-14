#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 502493840;
unsigned short var_1 = (unsigned short)34960;
unsigned int var_2 = 3671071611U;
signed char var_3 = (signed char)113;
unsigned int var_4 = 3424500972U;
int var_5 = -785985074;
signed char var_6 = (signed char)100;
unsigned char var_7 = (unsigned char)196;
unsigned char var_8 = (unsigned char)130;
unsigned short var_9 = (unsigned short)8547;
long long int var_10 = -2420000630817303572LL;
unsigned short var_11 = (unsigned short)50897;
unsigned short var_12 = (unsigned short)15129;
int zero = 0;
unsigned long long int var_13 = 789968091036827047ULL;
unsigned char var_14 = (unsigned char)165;
unsigned char var_15 = (unsigned char)236;
signed char var_16 = (signed char)-69;
long long int arr_1 [18] [18] ;
int arr_2 [18] ;
unsigned int arr_3 [18] [18] [18] ;
int arr_9 [24] ;
signed char arr_12 [24] ;
_Bool arr_13 [24] ;
unsigned char arr_6 [18] [18] ;
unsigned char arr_7 [18] [18] ;
signed char arr_8 [18] [18] [18] ;
signed char arr_14 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -293554099689773552LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -496997971;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2419367116U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -181724601;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)12;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
