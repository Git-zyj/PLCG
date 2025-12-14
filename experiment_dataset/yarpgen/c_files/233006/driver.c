#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1564878207U;
unsigned int var_2 = 2948941377U;
short var_3 = (short)30503;
short var_4 = (short)21957;
unsigned long long int var_5 = 13554505640352720931ULL;
unsigned int var_6 = 2389605274U;
signed char var_7 = (signed char)6;
unsigned int var_8 = 1758433657U;
int var_9 = -1389360419;
unsigned char var_10 = (unsigned char)113;
short var_11 = (short)25642;
short var_12 = (short)-32364;
int zero = 0;
unsigned int var_13 = 4012778087U;
unsigned long long int var_14 = 16009386290946871011ULL;
short var_15 = (short)19359;
unsigned int var_16 = 54600962U;
unsigned int var_17 = 3805395373U;
unsigned long long int var_18 = 7177989663475871088ULL;
short var_19 = (short)-25012;
unsigned long long int var_20 = 13343801099822241621ULL;
unsigned char var_21 = (unsigned char)20;
unsigned char var_22 = (unsigned char)225;
unsigned char var_23 = (unsigned char)177;
signed char arr_0 [20] ;
int arr_1 [20] [20] ;
unsigned int arr_4 [15] ;
unsigned int arr_5 [15] [15] ;
unsigned long long int arr_8 [15] ;
signed char arr_10 [15] ;
unsigned long long int arr_17 [15] [15] [15] [15] [15] [15] [15] ;
unsigned int arr_20 [18] [18] ;
unsigned char arr_21 [15] [15] ;
unsigned char arr_2 [20] [20] ;
unsigned int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 920189348;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1676848741U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 2232173310U : 3366448729U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 7539892473075475635ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 16404723925193680920ULL : 7161961593037774015ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = 1748571163U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 658920616U : 1120036902U;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
