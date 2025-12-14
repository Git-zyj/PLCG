#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 18007978840462061944ULL;
unsigned short var_4 = (unsigned short)40889;
unsigned int var_5 = 2818526010U;
signed char var_6 = (signed char)-80;
int var_7 = -2137387633;
unsigned short var_8 = (unsigned short)59660;
int var_9 = -1825212194;
unsigned long long int var_10 = 13155668275467670697ULL;
unsigned long long int var_12 = 8734781255692986615ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 9231232998883276696ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 10004340860030703609ULL;
signed char var_18 = (signed char)-121;
short var_19 = (short)25638;
unsigned int var_20 = 3150838237U;
_Bool var_21 = (_Bool)0;
_Bool arr_0 [21] ;
_Bool arr_1 [21] [21] ;
unsigned long long int arr_2 [21] ;
unsigned int arr_4 [18] ;
_Bool arr_5 [18] ;
signed char arr_9 [18] ;
unsigned short arr_13 [24] [24] ;
unsigned long long int arr_14 [24] [24] ;
unsigned long long int arr_3 [21] [21] ;
_Bool arr_6 [18] [18] ;
unsigned long long int arr_7 [18] [18] ;
int arr_11 [18] ;
int arr_12 [18] ;
_Bool arr_15 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 16383280794209738362ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1479896451U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)17291;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = 6699789387634143186ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 14560873409654023108ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 16023331735077470019ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = -22953712;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 1151599630;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
