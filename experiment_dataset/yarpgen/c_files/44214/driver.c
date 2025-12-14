#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26992;
int var_2 = -1897306035;
unsigned long long int var_4 = 13612734467394770006ULL;
unsigned int var_11 = 2702427081U;
unsigned short var_12 = (unsigned short)56101;
short var_15 = (short)-8181;
short var_16 = (short)-11107;
int var_17 = 1926197433;
int zero = 0;
long long int var_18 = -7918342345247241958LL;
unsigned short var_19 = (unsigned short)49046;
unsigned short var_20 = (unsigned short)18038;
unsigned char var_21 = (unsigned char)105;
unsigned short var_22 = (unsigned short)12499;
unsigned short var_23 = (unsigned short)21793;
unsigned short var_24 = (unsigned short)11627;
int arr_0 [22] [22] ;
signed char arr_1 [22] ;
unsigned char arr_3 [22] [22] [22] ;
unsigned short arr_11 [15] [15] ;
long long int arr_4 [22] ;
int arr_8 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 2050102018;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)76 : (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56200 : (unsigned short)57808;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -8028906894239317793LL : -8452619570694844157LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = -1354544534;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
