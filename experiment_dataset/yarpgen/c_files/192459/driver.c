#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3689260902U;
unsigned int var_1 = 1651719796U;
unsigned long long int var_2 = 9122375900158769718ULL;
unsigned short var_5 = (unsigned short)3081;
unsigned char var_8 = (unsigned char)132;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 13427215699420758810ULL;
short var_16 = (short)17623;
unsigned long long int var_17 = 5863301451304854072ULL;
int zero = 0;
long long int var_18 = 208252443274298326LL;
unsigned short var_19 = (unsigned short)26608;
long long int var_20 = 42666255275730531LL;
unsigned short var_21 = (unsigned short)59146;
long long int var_22 = 4405421795555636309LL;
unsigned int arr_4 [23] ;
unsigned short arr_5 [23] ;
unsigned short arr_6 [23] ;
unsigned long long int arr_7 [23] [23] ;
unsigned int arr_10 [13] [13] ;
unsigned long long int arr_11 [13] [13] ;
long long int arr_14 [13] ;
long long int arr_12 [13] ;
long long int arr_15 [13] ;
unsigned short arr_16 [13] ;
short arr_17 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1080893380U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51047 : (unsigned short)23348;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)57853;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 6004918145714825241ULL : 7339758411050516031ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 3385179942U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 4807051984950830295ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 2190654651807163281LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 3983467500876422706LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = -1755034914979830133LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (unsigned short)6260;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (short)23180;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
