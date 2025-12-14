#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 3882953519U;
unsigned char var_4 = (unsigned char)206;
_Bool var_6 = (_Bool)1;
unsigned int var_10 = 1702584521U;
signed char var_11 = (signed char)26;
unsigned short var_12 = (unsigned short)5530;
int var_13 = -1870262637;
int var_17 = 353869298;
int zero = 0;
int var_19 = 330973720;
short var_20 = (short)-5174;
unsigned int var_21 = 2666331770U;
short var_22 = (short)-27480;
unsigned long long int var_23 = 1737663649529749171ULL;
int var_24 = -693083759;
short var_25 = (short)25871;
unsigned long long int var_26 = 15066170746496553478ULL;
_Bool var_27 = (_Bool)0;
int var_28 = 521708319;
signed char var_29 = (signed char)114;
unsigned int arr_0 [15] ;
long long int arr_1 [15] [15] ;
long long int arr_2 [15] [15] ;
signed char arr_3 [15] ;
unsigned short arr_4 [15] ;
int arr_5 [15] [15] [15] [15] ;
_Bool arr_22 [25] ;
unsigned short arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3824613295U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -2200364606960820433LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -4550693429642034337LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-60 : (signed char)85;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)6915;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -74682639;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56657 : (unsigned short)50486;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
