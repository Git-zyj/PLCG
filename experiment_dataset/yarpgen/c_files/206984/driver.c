#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)90;
unsigned short var_3 = (unsigned short)39182;
long long int var_4 = 8906727498493625799LL;
long long int var_5 = 1686862901757853925LL;
short var_7 = (short)17564;
short var_9 = (short)16850;
short var_10 = (short)-8821;
short var_11 = (short)1462;
short var_12 = (short)-1776;
long long int var_13 = 7971667791686056886LL;
signed char var_17 = (signed char)-106;
int zero = 0;
signed char var_20 = (signed char)65;
signed char var_21 = (signed char)107;
long long int var_22 = 763520484882702391LL;
unsigned short var_23 = (unsigned short)14498;
long long int var_24 = -851795622705040079LL;
long long int var_25 = -3857107636582917384LL;
unsigned short var_26 = (unsigned short)21431;
unsigned long long int var_27 = 15873177454260286350ULL;
long long int var_28 = -7627994094416266868LL;
long long int var_29 = -9118810455193466483LL;
long long int var_30 = 2782011891354869508LL;
short var_31 = (short)-15618;
unsigned short var_32 = (unsigned short)25697;
long long int var_33 = 2329614888150747677LL;
unsigned short var_34 = (unsigned short)63785;
long long int var_35 = 1945021219977030439LL;
unsigned short var_36 = (unsigned short)46962;
signed char var_37 = (signed char)25;
signed char var_38 = (signed char)-33;
unsigned char var_39 = (unsigned char)62;
short var_40 = (short)-16684;
long long int arr_1 [15] [15] ;
signed char arr_5 [15] [15] [15] ;
short arr_7 [15] [15] [15] ;
unsigned short arr_8 [15] [15] [15] ;
unsigned short arr_9 [15] ;
short arr_10 [15] [15] ;
unsigned short arr_13 [15] [15] [15] [15] [15] ;
unsigned short arr_15 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -8545608069847104591LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-4846;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)14141;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned short)52419;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-19513;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)8144;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned short)20172;
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
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
