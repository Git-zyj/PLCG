#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
signed char var_1 = (signed char)-52;
long long int var_2 = -6890116330897814988LL;
unsigned short var_3 = (unsigned short)41717;
unsigned char var_5 = (unsigned char)156;
unsigned short var_6 = (unsigned short)64792;
unsigned char var_9 = (unsigned char)207;
unsigned long long int var_10 = 11382804003377835585ULL;
unsigned short var_11 = (unsigned short)62659;
int zero = 0;
signed char var_12 = (signed char)103;
unsigned int var_13 = 3718763478U;
int var_14 = -627490510;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-56;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)123;
unsigned int var_19 = 3757936860U;
long long int var_20 = -8721834165272820641LL;
int var_21 = 1486708269;
unsigned char arr_2 [11] ;
unsigned short arr_7 [11] [11] ;
int arr_10 [11] [11] [11] [11] ;
long long int arr_14 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_15 [11] [11] [11] [11] [11] ;
long long int arr_16 [11] [11] [11] ;
unsigned int arr_17 [11] [11] [11] [11] [11] ;
unsigned int arr_20 [22] ;
unsigned short arr_21 [22] ;
unsigned int arr_23 [24] ;
long long int arr_26 [24] ;
int arr_19 [11] [11] [11] [11] [11] ;
unsigned int arr_22 [22] ;
int arr_27 [24] ;
int arr_28 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)121 : (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)37031 : (unsigned short)63086;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -455640640;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1689406444750389395LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 1960139272U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 7552893400545290878LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 2493603263U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = 2078703911U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (unsigned short)27536;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = 2156045872U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = 133706408760277622LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -1969138948 : 1997561266;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = 2210195438U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = -1823372933;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = -876377601;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
