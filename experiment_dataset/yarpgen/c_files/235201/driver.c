#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)183;
unsigned long long int var_4 = 10880042420555519433ULL;
signed char var_5 = (signed char)89;
signed char var_6 = (signed char)74;
short var_7 = (short)31517;
unsigned short var_8 = (unsigned short)36538;
short var_9 = (short)-32135;
signed char var_11 = (signed char)-34;
unsigned char var_12 = (unsigned char)142;
short var_14 = (short)-10779;
unsigned short var_15 = (unsigned short)2733;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 771872366U;
long long int var_18 = -7057969675353899946LL;
long long int var_19 = -3303286621309560170LL;
unsigned short var_20 = (unsigned short)4842;
unsigned short var_21 = (unsigned short)10296;
signed char var_22 = (signed char)88;
signed char var_23 = (signed char)-34;
_Bool arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
long long int arr_2 [19] ;
unsigned char arr_5 [17] ;
_Bool arr_6 [17] ;
long long int arr_7 [17] ;
_Bool arr_3 [19] ;
long long int arr_8 [17] ;
signed char arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -4193330094690805251LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 8632784856026917555LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 7026200923887531259LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (signed char)-94;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
