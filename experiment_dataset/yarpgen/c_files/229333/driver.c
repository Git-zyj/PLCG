#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9042390768521139781LL;
long long int var_1 = 2347973148522787104LL;
unsigned long long int var_2 = 12001725157443269237ULL;
short var_4 = (short)14685;
unsigned short var_5 = (unsigned short)46827;
unsigned char var_7 = (unsigned char)214;
unsigned char var_8 = (unsigned char)102;
short var_9 = (short)-24855;
long long int var_10 = 5902231312203032487LL;
unsigned short var_11 = (unsigned short)47258;
_Bool var_12 = (_Bool)0;
long long int var_13 = -7730712636480376820LL;
short var_14 = (short)16098;
unsigned short var_15 = (unsigned short)6894;
short var_16 = (short)1348;
short var_17 = (short)5790;
int zero = 0;
unsigned short var_18 = (unsigned short)46119;
unsigned short var_19 = (unsigned short)29773;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-28;
long long int var_22 = 4761503142924309083LL;
long long int var_23 = 153970883257987284LL;
unsigned int var_24 = 1729632351U;
unsigned char var_25 = (unsigned char)248;
signed char arr_2 [22] ;
unsigned int arr_3 [22] [22] ;
short arr_15 [21] ;
_Bool arr_16 [21] [21] ;
_Bool arr_17 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 16373776U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)-14743 : (short)-30672;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
