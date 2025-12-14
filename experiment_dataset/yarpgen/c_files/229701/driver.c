#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
int var_1 = 1531513914;
_Bool var_3 = (_Bool)1;
int var_5 = -1315449877;
unsigned short var_6 = (unsigned short)64702;
long long int var_8 = -885615111283498417LL;
unsigned char var_9 = (unsigned char)92;
unsigned short var_13 = (unsigned short)3543;
long long int var_14 = -5972537468547596847LL;
short var_15 = (short)22563;
short var_18 = (short)13227;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)120;
unsigned short var_22 = (unsigned short)29765;
unsigned char var_23 = (unsigned char)147;
int var_24 = 1114282595;
unsigned short var_25 = (unsigned short)16495;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)13234;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)1;
short var_30 = (short)-8884;
_Bool var_31 = (_Bool)0;
unsigned char arr_0 [25] [25] ;
long long int arr_1 [25] ;
long long int arr_5 [10] ;
_Bool arr_8 [22] [22] ;
_Bool arr_6 [10] ;
short arr_9 [22] [22] ;
unsigned char arr_13 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1405576832129833296LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -3078563044444536812LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)29749 : (short)15787;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)15 : (unsigned char)112;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
