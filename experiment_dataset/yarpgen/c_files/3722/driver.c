#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25689;
unsigned long long int var_1 = 15456412904760373683ULL;
unsigned int var_2 = 3282646586U;
unsigned short var_3 = (unsigned short)57905;
unsigned short var_4 = (unsigned short)65435;
signed char var_5 = (signed char)60;
unsigned long long int var_6 = 13883242428046039133ULL;
unsigned long long int var_7 = 8305490315624155406ULL;
unsigned int var_8 = 134831944U;
signed char var_9 = (signed char)-110;
unsigned int var_10 = 3665592553U;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1520909708U;
signed char var_13 = (signed char)-126;
signed char var_14 = (signed char)64;
int var_15 = 817206708;
unsigned int var_16 = 2827489498U;
int var_17 = 1476200537;
unsigned long long int var_18 = 1964131432845221616ULL;
signed char var_19 = (signed char)113;
signed char var_20 = (signed char)-45;
unsigned short var_21 = (unsigned short)57449;
unsigned short arr_0 [20] ;
signed char arr_2 [20] [20] ;
_Bool arr_3 [20] [20] ;
_Bool arr_4 [20] [20] ;
signed char arr_7 [20] ;
int arr_10 [16] ;
signed char arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)50063;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 569155405 : -721456128;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)3 : (signed char)123;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
