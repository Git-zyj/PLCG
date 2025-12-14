#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)40;
unsigned short var_2 = (unsigned short)42887;
int var_3 = 1343388749;
unsigned short var_4 = (unsigned short)30135;
unsigned char var_6 = (unsigned char)209;
unsigned short var_9 = (unsigned short)57642;
signed char var_11 = (signed char)-52;
unsigned short var_13 = (unsigned short)46231;
unsigned long long int var_15 = 14899931195302850721ULL;
signed char var_16 = (signed char)36;
int zero = 0;
unsigned char var_17 = (unsigned char)101;
unsigned char var_18 = (unsigned char)13;
signed char var_19 = (signed char)-38;
int var_20 = 2031048787;
unsigned short var_21 = (unsigned short)20372;
short var_22 = (short)-16245;
unsigned int var_23 = 3932633492U;
unsigned char var_24 = (unsigned char)237;
unsigned char var_25 = (unsigned char)67;
unsigned long long int arr_0 [11] [11] ;
unsigned short arr_1 [11] ;
_Bool arr_3 [11] ;
unsigned short arr_4 [11] [11] ;
unsigned short arr_8 [11] ;
signed char arr_11 [11] ;
unsigned char arr_13 [11] [11] [11] ;
int arr_15 [11] ;
unsigned short arr_19 [11] [11] [11] [11] ;
unsigned short arr_20 [11] [11] ;
unsigned int arr_2 [11] ;
signed char arr_6 [11] ;
unsigned int arr_12 [11] ;
unsigned long long int arr_21 [11] ;
signed char arr_22 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 2550108551981226444ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)24885;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)11571;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15883 : (unsigned short)21369;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)89 : (signed char)31;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = -1640410477;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)45143 : (unsigned short)30099;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)13589;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1714475640U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)106 : (signed char)-30;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 2192893583U : 3986495013U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 3102292804641104864ULL : 6985235288054276279ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)2 : (signed char)92;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
