#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 976941161U;
long long int var_4 = 8443738464308315486LL;
long long int var_6 = -891211815192737601LL;
short var_7 = (short)9945;
unsigned int var_8 = 2955370392U;
long long int var_9 = -2649394814991030337LL;
signed char var_10 = (signed char)125;
unsigned char var_11 = (unsigned char)128;
unsigned char var_16 = (unsigned char)233;
unsigned int var_18 = 4023157814U;
short var_19 = (short)14947;
int zero = 0;
short var_20 = (short)-19612;
signed char var_21 = (signed char)98;
unsigned short var_22 = (unsigned short)62089;
unsigned long long int var_23 = 8204761009688156240ULL;
unsigned int var_24 = 3794214147U;
int var_25 = 1126650233;
unsigned short var_26 = (unsigned short)62591;
unsigned short var_27 = (unsigned short)40127;
int var_28 = -1358362424;
int var_29 = 1245186769;
unsigned char var_30 = (unsigned char)198;
short arr_0 [22] ;
long long int arr_1 [22] ;
unsigned short arr_2 [22] ;
unsigned short arr_4 [21] ;
unsigned short arr_5 [21] ;
signed char arr_10 [14] [14] ;
short arr_12 [14] ;
long long int arr_14 [14] [14] [14] ;
signed char arr_16 [14] ;
unsigned short arr_3 [22] ;
long long int arr_6 [21] ;
_Bool arr_7 [21] ;
unsigned int arr_8 [21] ;
signed char arr_13 [14] ;
unsigned char arr_17 [14] [14] [14] ;
signed char arr_18 [14] ;
unsigned short arr_19 [14] ;
unsigned int arr_22 [14] [14] ;
unsigned short arr_23 [14] ;
long long int arr_24 [14] ;
signed char arr_25 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)30243;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3660805088511565465LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)6152;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)61615;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58437 : (unsigned short)10946;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-116 : (signed char)54;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (short)-19284;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1494268778645596864LL : 4392890433093992296LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)50551;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 8107836175288235894LL : 6796481331082781227LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3630605340U : 3121078004U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)39 : (signed char)31;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)133 : (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)115 : (signed char)-60;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10948 : (unsigned short)23582;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 1242226281U : 1004013831U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35187 : (unsigned short)43847;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 1852995007933781184LL : 8824503560023490456LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (signed char)-121 : (signed char)60;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
