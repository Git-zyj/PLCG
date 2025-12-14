#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12295;
unsigned long long int var_3 = 10233512523620639380ULL;
unsigned long long int var_5 = 9250102279784128552ULL;
long long int var_7 = -5705006587574031928LL;
unsigned char var_8 = (unsigned char)142;
signed char var_9 = (signed char)-91;
signed char var_10 = (signed char)-15;
short var_11 = (short)21483;
long long int var_12 = -6587021185587848971LL;
long long int var_16 = -7289178093841307906LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_19 = (short)-21681;
unsigned long long int var_20 = 13814405492956466503ULL;
int var_21 = -1005362188;
signed char var_22 = (signed char)-87;
short var_23 = (short)28178;
long long int var_24 = -1894336946753103712LL;
long long int arr_0 [15] [15] ;
signed char arr_1 [15] ;
unsigned short arr_2 [15] ;
short arr_5 [20] [20] ;
unsigned short arr_7 [20] [20] ;
short arr_4 [15] ;
short arr_8 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -3792791965640559969LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)54967;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (short)17903;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)31798;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)-25071;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (short)26758;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
