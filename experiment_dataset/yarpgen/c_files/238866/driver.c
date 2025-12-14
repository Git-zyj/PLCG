#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)32378;
unsigned char var_2 = (unsigned char)220;
unsigned int var_5 = 1979383392U;
unsigned short var_7 = (unsigned short)34781;
unsigned char var_10 = (unsigned char)195;
long long int var_11 = 3622865423357497848LL;
long long int var_13 = -223231356311112477LL;
int var_15 = -1049174466;
int zero = 0;
signed char var_16 = (signed char)32;
int var_17 = -1515925631;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3013984868U;
unsigned char var_20 = (unsigned char)32;
unsigned short var_21 = (unsigned short)34937;
long long int var_22 = 759589670330307514LL;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 9606233002226120914ULL;
unsigned long long int var_25 = 9946931862364258815ULL;
_Bool arr_4 [11] [11] [11] ;
unsigned short arr_5 [11] ;
signed char arr_6 [11] [11] ;
int arr_7 [11] ;
signed char arr_9 [11] ;
_Bool arr_12 [11] [11] ;
_Bool arr_16 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)35977;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 806457439;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
