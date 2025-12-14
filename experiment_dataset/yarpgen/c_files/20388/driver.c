#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6196;
unsigned char var_1 = (unsigned char)195;
signed char var_2 = (signed char)-118;
_Bool var_6 = (_Bool)0;
int var_7 = -14589778;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)77;
unsigned short var_11 = (unsigned short)20558;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = 4452387570575792672LL;
int var_14 = 549369025;
long long int var_15 = -5004223703876233045LL;
unsigned char var_16 = (unsigned char)107;
int arr_1 [14] [14] ;
unsigned short arr_2 [14] ;
unsigned long long int arr_5 [14] [14] ;
unsigned int arr_7 [14] ;
unsigned int arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -1413811912;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)655;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 12740365834405787567ULL : 13136251073511030910ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1386414217U : 2741247681U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 2795333683U : 1317035640U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
