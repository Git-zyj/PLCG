#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)85;
int var_5 = -1946515590;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 8675796157146128050ULL;
signed char var_10 = (signed char)96;
unsigned long long int var_12 = 4113066175594883666ULL;
long long int var_13 = -6308153035840501818LL;
unsigned long long int var_15 = 18153153432611348932ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_18 = 17455996820871119270ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)185;
signed char var_21 = (signed char)25;
signed char var_22 = (signed char)-40;
_Bool var_23 = (_Bool)1;
unsigned int arr_0 [13] ;
long long int arr_1 [13] [13] ;
long long int arr_2 [13] ;
_Bool arr_3 [13] [13] ;
int arr_4 [13] [13] ;
unsigned short arr_5 [13] [13] [13] ;
unsigned int arr_7 [13] ;
int arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 667896445U : 2817848742U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 5209130256861812700LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2571066899703551367LL : -7239813139696474548LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -612455035;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)19420;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1079032380U : 1261605037U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -619255942 : -1589755688;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
