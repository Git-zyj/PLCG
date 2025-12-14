#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1544176695U;
signed char var_4 = (signed char)66;
unsigned short var_7 = (unsigned short)12770;
unsigned long long int var_8 = 5551689436517391143ULL;
signed char var_9 = (signed char)102;
short var_10 = (short)-24479;
int zero = 0;
signed char var_11 = (signed char)-18;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-15;
long long int var_14 = -4607793043790760296LL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)62268;
signed char var_18 = (signed char)51;
long long int var_19 = 8940941230451433930LL;
unsigned short var_20 = (unsigned short)57608;
unsigned int var_21 = 3656424311U;
unsigned long long int var_22 = 577889412611557702ULL;
signed char var_23 = (signed char)-42;
int var_24 = -1714577921;
_Bool var_25 = (_Bool)1;
unsigned int arr_0 [15] ;
_Bool arr_1 [15] [15] ;
signed char arr_2 [15] [15] ;
unsigned int arr_3 [15] ;
signed char arr_10 [10] ;
unsigned char arr_18 [10] [10] [10] [10] ;
int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2586330167U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1229538562U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -186014698 : 1829568247;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
