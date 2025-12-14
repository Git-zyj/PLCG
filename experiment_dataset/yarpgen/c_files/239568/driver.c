#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8958729358429424364LL;
unsigned short var_6 = (unsigned short)47033;
unsigned int var_7 = 1348104159U;
unsigned short var_9 = (unsigned short)25007;
unsigned char var_10 = (unsigned char)157;
unsigned int var_12 = 2078061329U;
int zero = 0;
unsigned long long int var_13 = 9808346926910182869ULL;
short var_14 = (short)22303;
short var_15 = (short)18272;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)137;
int arr_0 [11] ;
unsigned short arr_2 [11] ;
unsigned int arr_17 [20] ;
signed char arr_18 [20] [20] ;
int arr_8 [11] [11] ;
short arr_9 [11] ;
unsigned short arr_15 [11] ;
unsigned char arr_16 [11] ;
unsigned int arr_19 [20] [20] ;
_Bool arr_20 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -1679022479;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)46031;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 2959244921U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -1975552561 : -1513969367;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (short)-24598;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (unsigned short)36589;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = 2348517722U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
