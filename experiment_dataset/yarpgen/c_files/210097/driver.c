#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11273210383403235575ULL;
unsigned short var_1 = (unsigned short)45312;
short var_2 = (short)-1763;
short var_3 = (short)-17144;
int var_4 = -624514115;
signed char var_6 = (signed char)-14;
int var_7 = -1176067748;
unsigned short var_8 = (unsigned short)43967;
signed char var_9 = (signed char)-95;
int zero = 0;
long long int var_10 = -4233146309033132343LL;
int var_11 = -959020324;
signed char var_12 = (signed char)25;
signed char var_13 = (signed char)101;
short var_14 = (short)-22464;
signed char var_15 = (signed char)114;
int var_16 = -1331316291;
long long int var_17 = 671323309457558242LL;
signed char var_18 = (signed char)-60;
signed char arr_0 [19] ;
int arr_1 [19] ;
short arr_6 [21] ;
_Bool arr_8 [13] ;
unsigned long long int arr_9 [13] ;
long long int arr_10 [13] ;
int arr_2 [19] ;
unsigned long long int arr_3 [19] ;
int arr_7 [21] [21] ;
long long int arr_11 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -1326701264;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)20442;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 5851761048995763583ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 8475636665359522038LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -1106181973;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 16921748383561489064ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = -1925301786;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 8090856015012776369LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
