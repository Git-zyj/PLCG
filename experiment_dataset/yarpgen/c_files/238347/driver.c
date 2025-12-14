#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40977;
signed char var_1 = (signed char)9;
int var_2 = 1205799269;
unsigned int var_3 = 592535956U;
int var_4 = -984674721;
unsigned int var_5 = 2601222817U;
signed char var_6 = (signed char)-3;
signed char var_7 = (signed char)77;
unsigned short var_8 = (unsigned short)2060;
long long int var_9 = 7169224604718789766LL;
short var_10 = (short)-16952;
unsigned char var_11 = (unsigned char)133;
long long int var_12 = -4391558927963048265LL;
unsigned short var_13 = (unsigned short)30574;
int zero = 0;
short var_14 = (short)-3798;
short var_15 = (short)15262;
signed char var_16 = (signed char)124;
signed char var_17 = (signed char)-15;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)188;
unsigned short var_20 = (unsigned short)29112;
unsigned short var_21 = (unsigned short)43518;
long long int var_22 = 7963181548281667093LL;
unsigned short var_23 = (unsigned short)21042;
unsigned int var_24 = 1711646740U;
unsigned long long int var_25 = 18266103333038432530ULL;
unsigned long long int var_26 = 14849342745198606207ULL;
unsigned char var_27 = (unsigned char)8;
signed char var_28 = (signed char)103;
unsigned short var_29 = (unsigned short)10543;
int var_30 = 874224748;
int arr_3 [19] ;
int arr_4 [19] ;
short arr_5 [19] [19] [19] ;
unsigned short arr_7 [19] [19] [19] ;
int arr_8 [19] [19] [19] ;
signed char arr_9 [19] ;
int arr_10 [19] [19] [19] [19] ;
int arr_12 [19] [19] [19] [19] [19] [19] ;
signed char arr_13 [19] [19] [19] [19] [19] [19] ;
unsigned int arr_18 [19] ;
unsigned long long int arr_19 [19] ;
int arr_16 [19] [19] [19] [19] [19] ;
long long int arr_17 [19] ;
int arr_21 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1806298884;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -1723753557;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)16792;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)23834;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1545053971;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 2134918389;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 118678757;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = 3662396835U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = 3160768994220665500ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 1425684967;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = -1251924119203201431LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = 1828286117;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
