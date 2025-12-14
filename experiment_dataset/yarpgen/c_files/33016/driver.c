#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2877;
int var_1 = -1700354880;
long long int var_2 = -2140368960505977393LL;
int var_4 = 1320195010;
unsigned short var_5 = (unsigned short)56944;
long long int var_6 = 4628543679500515398LL;
unsigned long long int var_7 = 2204640733438657457ULL;
unsigned long long int var_8 = 18360156882582199692ULL;
unsigned long long int var_10 = 39637665749378579ULL;
long long int var_11 = -5453883406997400503LL;
int var_12 = 396895652;
unsigned long long int var_14 = 4829167198410706103ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)68;
unsigned char var_16 = (unsigned char)145;
long long int var_17 = 5647588029289340851LL;
unsigned short var_18 = (unsigned short)4339;
signed char var_19 = (signed char)29;
unsigned char var_20 = (unsigned char)52;
unsigned short var_21 = (unsigned short)20790;
unsigned long long int var_22 = 8756070870688426321ULL;
unsigned int var_23 = 1635702438U;
unsigned int var_24 = 3849965383U;
signed char var_25 = (signed char)-63;
int var_26 = 1012748586;
signed char arr_5 [21] ;
long long int arr_7 [21] [21] ;
unsigned short arr_8 [21] [21] ;
unsigned char arr_10 [21] ;
unsigned char arr_11 [21] [21] ;
long long int arr_16 [21] [21] [21] ;
short arr_20 [21] ;
short arr_23 [21] [21] ;
long long int arr_3 [11] ;
signed char arr_9 [21] [21] [21] ;
int arr_13 [21] ;
int arr_18 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 6085232121551531315LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)56552;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8986346048865438100LL : 1508656089819462374LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (short)-26446 : (short)-10209;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = (short)28693;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -4169596023280727330LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 1272941411;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -875536813 : 1434086300;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
