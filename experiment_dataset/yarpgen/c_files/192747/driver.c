#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 357620117U;
short var_1 = (short)-11194;
unsigned long long int var_3 = 14029903621485224247ULL;
short var_5 = (short)-24072;
unsigned long long int var_6 = 2934980899157156098ULL;
long long int var_7 = 8361658157290754179LL;
long long int var_10 = 8239650613253895585LL;
long long int var_12 = -2072498838595102233LL;
_Bool var_13 = (_Bool)0;
unsigned char var_16 = (unsigned char)112;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)93;
int var_19 = -247279218;
short var_20 = (short)3274;
long long int var_21 = 7135726741965215822LL;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)100;
unsigned char arr_1 [25] ;
unsigned short arr_2 [25] [25] [25] ;
long long int arr_4 [25] [25] ;
unsigned char arr_9 [25] [25] [25] [25] ;
unsigned char arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)55456;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -7560457357163065562LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned char)124;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
