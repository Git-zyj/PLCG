#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)32;
signed char var_2 = (signed char)-123;
unsigned int var_3 = 3099139020U;
short var_4 = (short)2684;
unsigned int var_5 = 1777470557U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 2098267649082770893ULL;
unsigned long long int var_8 = 834469576948252646ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)21563;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)15171;
unsigned short var_14 = (unsigned short)11496;
unsigned short var_15 = (unsigned short)33789;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 5784306959312842802ULL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)40812;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-6014;
signed char var_23 = (signed char)-11;
signed char var_24 = (signed char)-103;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)0;
_Bool arr_0 [13] ;
signed char arr_1 [13] [13] ;
unsigned short arr_3 [13] ;
_Bool arr_5 [13] ;
unsigned long long int arr_7 [13] [13] [13] ;
short arr_9 [13] [13] [13] [13] ;
_Bool arr_13 [13] ;
short arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)21643;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 11827848451318961925ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)14477;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-1062;
}

void checksum() {
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
