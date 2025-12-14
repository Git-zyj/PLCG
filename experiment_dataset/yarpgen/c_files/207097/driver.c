#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 16190701948827011321ULL;
unsigned int var_4 = 685417266U;
unsigned int var_5 = 3736740895U;
short var_6 = (short)-7847;
unsigned char var_7 = (unsigned char)101;
long long int var_8 = 585607947962510939LL;
unsigned char var_9 = (unsigned char)14;
short var_11 = (short)-224;
int var_12 = 770947468;
unsigned int var_13 = 4169215739U;
unsigned int var_14 = 1631508874U;
unsigned long long int var_16 = 2132835249160465543ULL;
unsigned long long int var_18 = 8427527810802217624ULL;
unsigned long long int var_19 = 5819741536653699622ULL;
int zero = 0;
signed char var_20 = (signed char)29;
unsigned char var_21 = (unsigned char)192;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2252987187U;
short var_24 = (short)16289;
unsigned int var_25 = 1802335142U;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)12824;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)1;
int var_31 = -1380872843;
_Bool var_32 = (_Bool)0;
unsigned short arr_4 [20] [20] ;
signed char arr_5 [20] [20] ;
_Bool arr_13 [20] [20] [20] [20] ;
_Bool arr_20 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)30324 : (unsigned short)30861;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)32 : (signed char)58;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
