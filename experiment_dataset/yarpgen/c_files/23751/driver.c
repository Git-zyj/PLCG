#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -1020533758;
int var_4 = 363856868;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 1536037814U;
signed char var_8 = (signed char)-101;
int var_11 = 1905581010;
unsigned short var_13 = (unsigned short)55135;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)75;
int zero = 0;
unsigned char var_20 = (unsigned char)230;
int var_21 = 1897650270;
unsigned long long int var_22 = 2070792026146226497ULL;
unsigned short var_23 = (unsigned short)52700;
unsigned char var_24 = (unsigned char)158;
unsigned short var_25 = (unsigned short)54038;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
unsigned short var_28 = (unsigned short)10787;
unsigned long long int arr_0 [15] ;
unsigned short arr_1 [15] [15] ;
unsigned char arr_2 [15] ;
unsigned short arr_4 [25] ;
long long int arr_6 [25] ;
_Bool arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 6098014423582232443ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)30303 : (unsigned short)25893;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)96 : (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)19990;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -418697066105192717LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
