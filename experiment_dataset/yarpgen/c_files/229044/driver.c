#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
unsigned int var_1 = 3339366790U;
unsigned char var_2 = (unsigned char)245;
unsigned short var_3 = (unsigned short)42712;
int var_4 = 929251677;
unsigned short var_5 = (unsigned short)26829;
int var_6 = 1833715143;
unsigned short var_7 = (unsigned short)49422;
signed char var_8 = (signed char)-118;
int var_10 = 1834969705;
unsigned long long int var_11 = 15798667830714417597ULL;
unsigned char var_12 = (unsigned char)247;
unsigned char var_13 = (unsigned char)179;
signed char var_14 = (signed char)-68;
unsigned long long int var_15 = 8252876543756416426ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)17;
signed char var_17 = (signed char)-113;
unsigned long long int var_18 = 1141252078010325242ULL;
signed char var_19 = (signed char)74;
unsigned char var_20 = (unsigned char)92;
signed char var_21 = (signed char)-99;
unsigned int var_22 = 2506491980U;
short var_23 = (short)-21278;
short arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
unsigned char arr_2 [13] [13] [13] ;
signed char arr_3 [13] [13] ;
_Bool arr_6 [13] ;
long long int arr_7 [13] ;
short arr_4 [13] [13] ;
unsigned char arr_5 [13] ;
unsigned long long int arr_8 [13] [13] [13] ;
unsigned char arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)8008;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 8189760641071599777ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 8397526844871175951LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (short)31292;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 11402188773281143905ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned char)68;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
