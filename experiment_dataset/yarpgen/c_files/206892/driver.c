#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6198273054031782110ULL;
unsigned char var_7 = (unsigned char)7;
long long int var_9 = 493104237119527490LL;
long long int var_10 = 5235476004645368472LL;
_Bool var_11 = (_Bool)0;
unsigned short var_15 = (unsigned short)33719;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)192;
short var_21 = (short)27273;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-4;
signed char var_24 = (signed char)-112;
unsigned long long int var_25 = 15299208170023599501ULL;
unsigned int var_26 = 3216174410U;
unsigned char var_27 = (unsigned char)7;
signed char var_28 = (signed char)12;
unsigned char var_29 = (unsigned char)140;
unsigned long long int var_30 = 9514262469329233878ULL;
short var_31 = (short)23148;
signed char var_32 = (signed char)-41;
signed char var_33 = (signed char)-94;
unsigned int var_34 = 4036815046U;
long long int var_35 = 5561988915042913497LL;
short var_36 = (short)-15192;
unsigned int var_37 = 3416906828U;
_Bool var_38 = (_Bool)1;
unsigned int var_39 = 2600072744U;
signed char arr_0 [20] ;
unsigned long long int arr_1 [20] ;
signed char arr_3 [10] [10] ;
int arr_6 [19] ;
unsigned long long int arr_7 [19] ;
unsigned char arr_8 [19] [19] ;
unsigned long long int arr_11 [19] [19] ;
short arr_17 [19] ;
short arr_20 [11] ;
signed char arr_21 [16] ;
_Bool arr_23 [16] ;
unsigned int arr_4 [10] ;
unsigned char arr_5 [10] ;
short arr_18 [19] [19] [19] ;
unsigned int arr_24 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 4619629859588855723ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -1736687909;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 15247791094248277031ULL : 5108804641748190261ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)173 : (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = 2060402711355173493ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (short)32303;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (short)-19928;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3158645186U : 2668380463U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)24 : (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)13523 : (short)-16269;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = 2056377379U;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
