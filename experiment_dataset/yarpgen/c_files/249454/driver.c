#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
long long int var_1 = 261727435362498952LL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2510824901U;
unsigned short var_5 = (unsigned short)47945;
long long int var_6 = -6960749121453157211LL;
unsigned int var_7 = 2240086904U;
signed char var_10 = (signed char)31;
int zero = 0;
long long int var_11 = 4679288532618583902LL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5404623334933991974LL;
unsigned int var_16 = 80011750U;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 13260527719856337826ULL;
signed char var_19 = (signed char)73;
_Bool var_20 = (_Bool)0;
unsigned short arr_0 [25] [25] ;
unsigned short arr_2 [25] ;
unsigned char arr_7 [12] [12] [12] ;
short arr_10 [12] ;
unsigned char arr_11 [12] ;
signed char arr_12 [12] [12] ;
int arr_22 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)45110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)58604;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)21118 : (short)-7741;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)67 : (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -163749378 : -2085199353;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
