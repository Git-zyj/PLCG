#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7235951479113430891LL;
long long int var_1 = -142288768728779603LL;
unsigned int var_2 = 3803499871U;
signed char var_3 = (signed char)51;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-31103;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)171;
unsigned char var_8 = (unsigned char)70;
int var_9 = -1287763186;
short var_10 = (short)16987;
signed char var_11 = (signed char)-1;
int zero = 0;
unsigned short var_13 = (unsigned short)51490;
short var_14 = (short)-30861;
unsigned char var_15 = (unsigned char)110;
unsigned long long int var_16 = 9383131476007540847ULL;
unsigned char arr_0 [15] [15] ;
unsigned long long int arr_1 [15] ;
long long int arr_2 [15] [15] ;
unsigned char arr_3 [15] ;
unsigned char arr_4 [15] ;
int arr_5 [15] ;
_Bool arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 4858871951194241002ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -1804555279736001892LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 395662386 : -2040600552;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
