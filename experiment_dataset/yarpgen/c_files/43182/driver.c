#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
unsigned int var_2 = 2457315793U;
short var_3 = (short)1296;
int var_5 = -2054858820;
long long int var_6 = -1046873368796283078LL;
int var_7 = 1099214093;
_Bool var_8 = (_Bool)1;
int var_9 = 970586677;
unsigned char var_15 = (unsigned char)33;
unsigned short var_17 = (unsigned short)56253;
int zero = 0;
short var_18 = (short)6614;
signed char var_19 = (signed char)-121;
signed char var_20 = (signed char)46;
_Bool var_21 = (_Bool)0;
int var_22 = 1998263968;
int var_23 = 1049026036;
unsigned char var_24 = (unsigned char)223;
unsigned short arr_2 [14] ;
unsigned char arr_3 [14] ;
unsigned long long int arr_4 [23] ;
unsigned int arr_5 [23] [23] ;
int arr_6 [20] [20] ;
_Bool arr_7 [20] ;
unsigned int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)58473;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 17477378524342953712ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 3183464255U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = -1094731835;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 2347385014U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
