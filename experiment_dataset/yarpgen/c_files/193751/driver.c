#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
unsigned short var_1 = (unsigned short)7367;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)15952;
unsigned char var_4 = (unsigned char)116;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)151;
unsigned char var_11 = (unsigned char)123;
unsigned int var_12 = 817225208U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 3215046254U;
unsigned int var_15 = 1312539070U;
int var_16 = 1833509168;
unsigned char var_17 = (unsigned char)96;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)118;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)14595;
int var_22 = 1968964413;
unsigned short arr_0 [18] ;
unsigned char arr_1 [18] [18] ;
unsigned char arr_3 [24] ;
unsigned char arr_4 [24] [24] ;
unsigned char arr_7 [14] [14] ;
unsigned short arr_9 [14] ;
unsigned char arr_2 [18] ;
unsigned short arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)7591;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)40308 : (unsigned short)51495;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)31088;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
