#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
signed char var_1 = (signed char)11;
signed char var_3 = (signed char)19;
unsigned short var_5 = (unsigned short)22231;
short var_7 = (short)-827;
signed char var_8 = (signed char)-33;
unsigned char var_13 = (unsigned char)84;
int var_14 = 423873730;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-64;
unsigned char var_18 = (unsigned char)162;
unsigned char var_19 = (unsigned char)232;
int zero = 0;
int var_20 = 1023076888;
unsigned char var_21 = (unsigned char)106;
long long int var_22 = 7395836481105559826LL;
int var_23 = -271899301;
unsigned long long int var_24 = 10998133634561811593ULL;
unsigned long long int var_25 = 11693244026818925292ULL;
int arr_0 [21] ;
long long int arr_1 [21] ;
signed char arr_3 [21] ;
_Bool arr_4 [21] ;
signed char arr_5 [21] ;
signed char arr_6 [21] [21] ;
_Bool arr_2 [21] ;
signed char arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1900663261;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -2267417142518032574LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)40;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
