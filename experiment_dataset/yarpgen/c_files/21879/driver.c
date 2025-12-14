#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 5622902685856447297ULL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -3686714456042176644LL;
unsigned long long int var_5 = 6167226656133052549ULL;
unsigned int var_8 = 3273813291U;
long long int var_9 = -2871647640443964875LL;
unsigned long long int var_10 = 4946341998814201627ULL;
int var_13 = 722105832;
unsigned long long int var_16 = 10876045570675407488ULL;
int zero = 0;
unsigned int var_19 = 2640999990U;
unsigned char var_20 = (unsigned char)65;
int var_21 = -832095393;
unsigned long long int var_22 = 1675019441944539807ULL;
signed char var_23 = (signed char)20;
unsigned int arr_1 [11] ;
int arr_2 [11] ;
unsigned long long int arr_4 [11] [11] [11] ;
int arr_5 [20] [20] ;
unsigned int arr_8 [20] [20] ;
unsigned int arr_9 [20] [20] ;
unsigned char arr_11 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3176273446U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1906723356;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3288553162690025980ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = -460809408;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 3969602565U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 1620783468U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)102 : (unsigned char)91;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
