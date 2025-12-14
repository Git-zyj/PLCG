#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11342775478928889588ULL;
long long int var_1 = -8271580623352573009LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 4206840622578282200LL;
signed char var_4 = (signed char)55;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)94;
unsigned long long int var_7 = 5221835350998051711ULL;
long long int var_8 = -9149196438639871473LL;
signed char var_9 = (signed char)94;
unsigned short var_10 = (unsigned short)46787;
short var_11 = (short)17233;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 8224222702169905176ULL;
unsigned int var_14 = 718007853U;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int var_17 = -566039656;
unsigned long long int var_18 = 6759312131114261947ULL;
unsigned long long int var_19 = 11939675543355001161ULL;
unsigned long long int var_20 = 415740883980535112ULL;
unsigned int var_21 = 2741932050U;
long long int var_22 = -7428026949392689344LL;
unsigned long long int var_23 = 16162750455436637121ULL;
unsigned long long int var_24 = 9206161550145227176ULL;
unsigned short arr_2 [15] ;
long long int arr_6 [15] [15] ;
short arr_7 [15] [15] ;
unsigned long long int arr_8 [15] [15] ;
_Bool arr_12 [11] ;
unsigned long long int arr_27 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)46430;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = -8998481866868033495LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-27326;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = 17043877343698596066ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_27 [i_0] = 1530544190226865197ULL;
}

void checksum() {
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
