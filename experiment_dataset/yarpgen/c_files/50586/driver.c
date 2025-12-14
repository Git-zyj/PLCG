#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1511208088;
short var_1 = (short)-25612;
unsigned short var_2 = (unsigned short)29327;
unsigned char var_3 = (unsigned char)172;
unsigned long long int var_4 = 7917222016337571506ULL;
int var_5 = -2106559041;
int var_6 = -1326260910;
unsigned long long int var_7 = 4084691823689549204ULL;
short var_8 = (short)3693;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 13395955164625763503ULL;
unsigned int var_11 = 823845759U;
unsigned int var_12 = 2311197696U;
int zero = 0;
short var_13 = (short)-15451;
signed char var_14 = (signed char)-57;
unsigned long long int var_15 = 4045688346245192829ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)2759;
signed char var_18 = (signed char)-50;
unsigned int var_19 = 2827435802U;
unsigned long long int var_20 = 5579064482413676751ULL;
_Bool arr_2 [17] [17] ;
unsigned long long int arr_7 [22] [22] ;
unsigned long long int arr_8 [22] [22] ;
unsigned short arr_11 [16] ;
unsigned int arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 3892009582997501768ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 9348307476715776013ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned short)53832;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 120924725U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
