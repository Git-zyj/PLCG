#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -995187428;
long long int var_2 = -3473905071661993251LL;
signed char var_3 = (signed char)-100;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_6 = -3169074717139752979LL;
long long int var_7 = 4785198389662084963LL;
short var_9 = (short)-12791;
unsigned char var_10 = (unsigned char)85;
int var_12 = 1726420506;
unsigned int var_13 = 2785042161U;
int var_14 = 414498231;
signed char var_15 = (signed char)-10;
short var_16 = (short)-13565;
unsigned short var_17 = (unsigned short)33497;
unsigned char var_18 = (unsigned char)133;
unsigned long long int var_19 = 3141227537625656726ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)146;
int var_22 = 1422888946;
int var_23 = 2124561047;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 2272932429U;
int var_27 = -2007266671;
long long int var_28 = 130117849820951764LL;
unsigned long long int var_29 = 17542523363033422565ULL;
unsigned short var_30 = (unsigned short)39909;
int arr_4 [17] [17] ;
unsigned long long int arr_11 [17] ;
unsigned char arr_14 [11] ;
signed char arr_17 [14] ;
signed char arr_18 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1416310818 : 1813795204;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 10122153385462383812ULL : 16767047181038182864ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (signed char)24;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
