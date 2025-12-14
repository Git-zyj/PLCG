#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35539;
unsigned char var_1 = (unsigned char)30;
signed char var_2 = (signed char)-27;
unsigned short var_3 = (unsigned short)8189;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)125;
short var_6 = (short)-23901;
unsigned long long int var_7 = 18144645324992101727ULL;
signed char var_9 = (signed char)28;
unsigned int var_10 = 3117752940U;
unsigned int var_13 = 3722809925U;
int zero = 0;
short var_15 = (short)-9091;
unsigned char var_16 = (unsigned char)16;
unsigned char var_17 = (unsigned char)58;
unsigned long long int var_18 = 10362437681623238551ULL;
short var_19 = (short)23296;
_Bool var_20 = (_Bool)1;
int var_21 = 1552662632;
short var_22 = (short)-7144;
short var_23 = (short)25605;
unsigned long long int var_24 = 7751691195892773259ULL;
short var_25 = (short)-5325;
signed char var_26 = (signed char)76;
_Bool arr_0 [14] ;
short arr_4 [14] ;
short arr_6 [14] [14] [14] [14] ;
unsigned int arr_7 [14] [14] [14] [14] ;
signed char arr_9 [14] [14] [14] ;
signed char arr_10 [14] ;
int arr_20 [16] ;
short arr_21 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-2061 : (short)-23232;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-24572;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3797816745U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-86 : (signed char)58;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-89 : (signed char)18;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 1978985910 : 359424843;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (short)24514 : (short)-5801;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
