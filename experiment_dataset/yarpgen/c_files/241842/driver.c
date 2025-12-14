#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28839;
unsigned int var_1 = 2731679166U;
unsigned long long int var_3 = 14204860207170938289ULL;
unsigned char var_5 = (unsigned char)124;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)164;
unsigned char var_16 = (unsigned char)142;
long long int var_17 = 8822270146041237160LL;
signed char var_19 = (signed char)19;
int zero = 0;
unsigned char var_20 = (unsigned char)30;
unsigned char var_21 = (unsigned char)175;
unsigned char var_22 = (unsigned char)162;
unsigned int var_23 = 665596624U;
unsigned long long int var_24 = 3496000207185612066ULL;
short arr_0 [13] ;
signed char arr_1 [13] ;
unsigned long long int arr_2 [13] ;
unsigned char arr_3 [13] ;
unsigned short arr_6 [13] ;
_Bool arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)17336;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 10982988801568116873ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)43631;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
