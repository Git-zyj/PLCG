#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1829953796;
long long int var_1 = 2933676816132805363LL;
short var_2 = (short)-4718;
unsigned long long int var_3 = 12973511102069299452ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 219174414616539202LL;
unsigned int var_7 = 3488060374U;
unsigned short var_8 = (unsigned short)933;
long long int var_9 = 6837949210960592594LL;
signed char var_10 = (signed char)-66;
unsigned long long int var_11 = 12070978936047580080ULL;
unsigned int var_12 = 2231590872U;
short var_13 = (short)-29277;
int var_14 = 1696958423;
long long int var_15 = 3552633709222407122LL;
long long int var_16 = -3193999578213718431LL;
int zero = 0;
unsigned long long int var_17 = 14666705523053244217ULL;
long long int arr_0 [20] ;
unsigned char arr_1 [20] ;
int arr_4 [20] ;
signed char arr_7 [20] [20] ;
short arr_10 [22] ;
signed char arr_11 [22] ;
short arr_2 [20] ;
long long int arr_3 [20] ;
_Bool arr_8 [20] ;
_Bool arr_9 [20] ;
unsigned int arr_12 [22] ;
int arr_13 [22] ;
unsigned short arr_14 [22] ;
unsigned char arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -2487338205164253014LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1612874542;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)-28865;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-11354;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -6731632066504440288LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 2509137239U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 2023776887;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned short)30985;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (unsigned char)128;
}

void checksum() {
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
