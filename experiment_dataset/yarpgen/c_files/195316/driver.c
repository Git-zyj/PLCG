#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1405;
short var_1 = (short)-1919;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)51701;
unsigned char var_8 = (unsigned char)109;
unsigned char var_9 = (unsigned char)198;
short var_10 = (short)20213;
unsigned short var_12 = (unsigned short)8763;
short var_13 = (short)-23790;
int zero = 0;
long long int var_14 = -5998726036607097359LL;
unsigned long long int var_15 = 11271939083800395424ULL;
unsigned short var_16 = (unsigned short)36507;
unsigned short var_17 = (unsigned short)48735;
unsigned long long int var_18 = 5220643417060554743ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 11761960445875211811ULL;
unsigned long long int arr_0 [23] ;
_Bool arr_1 [23] [23] ;
unsigned short arr_3 [23] ;
unsigned char arr_4 [23] ;
unsigned char arr_2 [23] [23] ;
unsigned char arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 7049548676372282739ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)64505;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)102 : (unsigned char)208;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
