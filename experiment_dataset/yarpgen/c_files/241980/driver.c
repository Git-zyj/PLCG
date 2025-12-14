#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 407699928;
int var_1 = -1607182781;
signed char var_2 = (signed char)-4;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-91;
signed char var_6 = (signed char)-16;
int var_7 = 1168204098;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)63174;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int var_13 = -1066127233;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_17 = 1347583572;
long long int var_18 = 5270832555224628641LL;
int var_19 = 437455385;
signed char var_20 = (signed char)127;
signed char var_21 = (signed char)-68;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
int var_24 = 402433385;
_Bool var_25 = (_Bool)1;
_Bool arr_0 [17] ;
int arr_1 [17] ;
signed char arr_6 [10] [10] ;
int arr_8 [18] [18] ;
int arr_9 [18] ;
int arr_12 [25] ;
signed char arr_13 [25] ;
_Bool arr_2 [17] ;
signed char arr_3 [17] ;
int arr_4 [17] ;
int arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -2035589298;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 1035538513;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = -2080596104;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 1675301364;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -594824397;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1112445784 : -1802593302;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
