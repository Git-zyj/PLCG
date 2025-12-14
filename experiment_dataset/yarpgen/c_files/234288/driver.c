#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 894210646;
long long int var_1 = -2895277810872765398LL;
long long int var_3 = 144322412976850956LL;
long long int var_4 = 5767984113361664895LL;
_Bool var_5 = (_Bool)0;
int var_6 = 854833737;
int var_7 = -682145123;
int var_8 = 1614924690;
int var_9 = -198901329;
short var_10 = (short)-14333;
unsigned char var_11 = (unsigned char)55;
long long int var_12 = 7024320750614884434LL;
unsigned long long int var_13 = 16836757999378510990ULL;
unsigned long long int var_14 = 16087135522894208708ULL;
int zero = 0;
signed char var_17 = (signed char)48;
unsigned char var_18 = (unsigned char)185;
unsigned int var_19 = 3465164790U;
unsigned long long int var_20 = 11293122264322754972ULL;
signed char var_21 = (signed char)-36;
int var_22 = 386276631;
_Bool var_23 = (_Bool)1;
long long int arr_2 [15] [15] ;
unsigned char arr_6 [15] ;
unsigned char arr_8 [20] [20] ;
unsigned short arr_9 [20] ;
int arr_10 [20] ;
signed char arr_7 [15] ;
long long int arr_11 [20] ;
_Bool arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 5433943098099395165LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned short)54876;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 1623236794;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 2830463741391882923LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
