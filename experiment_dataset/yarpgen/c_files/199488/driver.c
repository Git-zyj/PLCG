#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3915504618U;
unsigned char var_2 = (unsigned char)67;
unsigned long long int var_4 = 17049134512171631705ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1448493015U;
unsigned long long int var_8 = 11674113473019416708ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)23191;
int zero = 0;
unsigned short var_12 = (unsigned short)46989;
int var_13 = 503019229;
unsigned char var_14 = (unsigned char)152;
int var_15 = 2097806788;
unsigned short var_16 = (unsigned short)21096;
int var_17 = -751776220;
unsigned short var_18 = (unsigned short)40671;
long long int var_19 = -848799548945231241LL;
unsigned int arr_0 [14] [14] ;
unsigned char arr_1 [14] [14] ;
signed char arr_2 [14] [14] ;
long long int arr_5 [14] ;
unsigned short arr_6 [14] ;
int arr_3 [14] ;
unsigned int arr_4 [14] ;
unsigned short arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 2408172505U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 4817705390100181905LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)2839;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2011195139 : -2023692098;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 391691007U : 307314899U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned short)44098;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
