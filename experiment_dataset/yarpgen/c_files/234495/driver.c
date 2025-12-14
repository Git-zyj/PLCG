#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 271701672209235423ULL;
unsigned char var_2 = (unsigned char)181;
unsigned char var_3 = (unsigned char)14;
unsigned short var_5 = (unsigned short)11608;
int var_6 = -784772652;
unsigned long long int var_7 = 17868199676810586824ULL;
int var_10 = 207927490;
int var_12 = -392106906;
int zero = 0;
unsigned long long int var_13 = 1863109733770600463ULL;
signed char var_14 = (signed char)-11;
unsigned long long int var_15 = 15874782747042573903ULL;
unsigned short var_16 = (unsigned short)2683;
unsigned short var_17 = (unsigned short)14039;
unsigned char var_18 = (unsigned char)8;
int var_19 = 644431723;
signed char var_20 = (signed char)4;
unsigned int var_21 = 3351069066U;
unsigned char var_22 = (unsigned char)66;
int var_23 = -247353709;
unsigned int var_24 = 482208121U;
_Bool arr_0 [13] [13] ;
short arr_1 [13] ;
_Bool arr_5 [22] ;
unsigned char arr_6 [22] [22] ;
unsigned int arr_8 [25] [25] ;
signed char arr_9 [25] ;
_Bool arr_10 [25] ;
short arr_7 [22] ;
unsigned int arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)2888;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 3885316267U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)14584 : (short)30188;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 673844895U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
