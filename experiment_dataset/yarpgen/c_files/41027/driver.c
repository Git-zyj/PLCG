#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1058386407;
unsigned int var_1 = 2503845781U;
long long int var_2 = -8581252579639923493LL;
unsigned char var_4 = (unsigned char)116;
unsigned char var_7 = (unsigned char)7;
signed char var_8 = (signed char)98;
unsigned long long int var_9 = 9228016809963427467ULL;
unsigned int var_10 = 2661392842U;
long long int var_11 = 5642243380215329910LL;
int zero = 0;
unsigned short var_12 = (unsigned short)18372;
signed char var_13 = (signed char)-79;
signed char var_14 = (signed char)103;
int var_15 = 1119751024;
long long int var_16 = 2748615250121893506LL;
unsigned long long int var_17 = 16118835766102633178ULL;
short var_18 = (short)19061;
unsigned char var_19 = (unsigned char)249;
unsigned char var_20 = (unsigned char)203;
unsigned long long int var_21 = 6146221857466516831ULL;
unsigned long long int var_22 = 6128580238597733050ULL;
unsigned long long int arr_0 [24] ;
int arr_2 [24] [24] ;
_Bool arr_3 [24] [24] [24] ;
unsigned int arr_4 [24] [24] [24] ;
_Bool arr_6 [25] ;
_Bool arr_7 [25] [25] ;
unsigned int arr_10 [23] ;
unsigned char arr_11 [23] [23] ;
unsigned long long int arr_5 [24] [24] [24] ;
short arr_8 [25] ;
unsigned short arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3303867054672715285ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -1631156383;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2929556787U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 1759735181U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 15558282508036797139ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)-15012;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)49158;
}

void checksum() {
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
