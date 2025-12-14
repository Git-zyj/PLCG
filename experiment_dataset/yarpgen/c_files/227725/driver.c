#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)28776;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)64926;
unsigned long long int var_16 = 7043949569259146992ULL;
unsigned int var_17 = 1562747372U;
unsigned char var_18 = (unsigned char)97;
int var_19 = -259801032;
unsigned long long int var_20 = 1259705341261476015ULL;
unsigned char arr_0 [15] ;
long long int arr_1 [15] ;
unsigned short arr_2 [15] [15] ;
short arr_3 [15] [15] ;
unsigned long long int arr_4 [15] ;
unsigned char arr_5 [15] [15] ;
long long int arr_8 [15] [15] [15] ;
unsigned short arr_9 [15] ;
unsigned char arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 7831052633271268864LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)2836;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)31965;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 4325133070747244722ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -3434955171512885461LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned short)28020;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)82 : (unsigned char)20;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
