#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4398218553284949942LL;
signed char var_8 = (signed char)-47;
int var_15 = 1931390831;
int zero = 0;
short var_17 = (short)7287;
signed char var_18 = (signed char)86;
short var_19 = (short)24673;
unsigned long long int var_20 = 11434947401744250428ULL;
short var_21 = (short)24569;
int var_22 = 1084848801;
signed char var_23 = (signed char)47;
signed char var_24 = (signed char)42;
_Bool arr_5 [24] [24] [24] ;
unsigned short arr_6 [24] [24] [24] ;
int arr_11 [24] [24] [24] [24] [24] ;
unsigned short arr_16 [13] ;
int arr_20 [13] ;
unsigned long long int arr_13 [24] [24] ;
int arr_14 [24] ;
unsigned char arr_15 [24] ;
long long int arr_22 [13] ;
short arr_23 [13] ;
int arr_24 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)46295;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 503333387;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (unsigned short)20818;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 390765939 : 1756390202;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 3110329737794416602ULL : 13160191519466829094ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = -176209556;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -1101257054506065731LL : 4470062349696392948LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (short)-12029 : (short)-18227;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -754030160 : 32250694;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
