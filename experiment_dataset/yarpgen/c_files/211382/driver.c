#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3460310028187815106LL;
short var_5 = (short)25360;
unsigned int var_6 = 3804569348U;
int var_8 = -1392612699;
int zero = 0;
unsigned char var_11 = (unsigned char)74;
signed char var_12 = (signed char)-64;
unsigned char var_13 = (unsigned char)52;
unsigned long long int var_14 = 3718362125116875082ULL;
signed char var_15 = (signed char)-88;
int var_16 = 776671090;
unsigned short var_17 = (unsigned short)36186;
int var_18 = -426922580;
unsigned short var_19 = (unsigned short)36428;
signed char var_20 = (signed char)102;
signed char var_21 = (signed char)-78;
_Bool arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
int arr_2 [25] [25] ;
int arr_3 [25] ;
_Bool arr_4 [25] [25] ;
unsigned short arr_5 [25] ;
int arr_6 [22] ;
short arr_11 [22] [22] ;
signed char arr_13 [22] ;
signed char arr_14 [22] [22] ;
int arr_19 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 15828740791643605541ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -476249791;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 599708480;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)16534;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 323821906;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (short)2094;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = -716524663;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
