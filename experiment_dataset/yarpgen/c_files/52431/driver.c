#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23415;
long long int var_1 = 1823468245337981152LL;
int var_3 = -1459597333;
unsigned long long int var_4 = 15383806254976589374ULL;
short var_5 = (short)21564;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 1671404422938120633ULL;
unsigned long long int var_13 = 16696595772284217726ULL;
unsigned long long int var_14 = 17029568779100537872ULL;
unsigned long long int var_17 = 6302092900318374627ULL;
int var_18 = -729232396;
int zero = 0;
signed char var_19 = (signed char)0;
unsigned char var_20 = (unsigned char)127;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
long long int var_24 = 8039483999003881379LL;
_Bool var_25 = (_Bool)0;
long long int var_26 = -3631918979618194583LL;
signed char var_27 = (signed char)54;
long long int arr_0 [12] ;
int arr_1 [12] ;
short arr_2 [12] [12] ;
unsigned long long int arr_5 [12] [12] [12] ;
_Bool arr_9 [12] ;
int arr_12 [12] ;
_Bool arr_13 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -8994899206941149567LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -1590659815;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-16590;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 18306016641631676633ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = 1471967297;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
