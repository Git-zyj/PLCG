#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14914762599523128425ULL;
unsigned int var_1 = 177421719U;
int var_2 = 29210590;
int var_4 = 1585095802;
unsigned int var_6 = 1868944901U;
unsigned char var_8 = (unsigned char)138;
signed char var_9 = (signed char)11;
unsigned char var_10 = (unsigned char)255;
long long int var_11 = -7010187969769764100LL;
unsigned char var_12 = (unsigned char)244;
unsigned long long int var_14 = 1084512731651427022ULL;
unsigned int var_15 = 1444459880U;
long long int var_16 = 3486580367497204330LL;
short var_17 = (short)-907;
long long int var_19 = 6763028678054740513LL;
int zero = 0;
int var_20 = 569501906;
int var_21 = -823828442;
unsigned int var_22 = 1364057530U;
int var_23 = 1242474386;
unsigned char var_24 = (unsigned char)4;
long long int var_25 = 9086451695006031856LL;
signed char var_26 = (signed char)-119;
short var_27 = (short)16427;
unsigned int var_28 = 214600435U;
signed char var_29 = (signed char)-5;
signed char var_30 = (signed char)-75;
short var_31 = (short)31184;
unsigned long long int var_32 = 1590177739520290069ULL;
long long int var_33 = -7599780057628518312LL;
unsigned int var_34 = 1458201162U;
int var_35 = 606817802;
unsigned long long int arr_0 [20] [20] ;
signed char arr_1 [20] ;
unsigned long long int arr_10 [20] [20] [20] [20] ;
long long int arr_14 [20] [20] ;
signed char arr_15 [20] ;
short arr_16 [20] ;
unsigned long long int arr_17 [20] [20] [20] ;
int arr_18 [20] [20] [20] [20] ;
signed char arr_12 [20] [20] ;
unsigned int arr_20 [20] [20] [20] ;
int arr_23 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 13934984618035683024ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 17910314603012782210ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = 6108680869431877229LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (short)23463;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 7279366193862219735ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 1780550886;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 4013775099U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = -28291767;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
