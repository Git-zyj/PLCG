#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1915175532087551207ULL;
unsigned long long int var_6 = 12266251623692267681ULL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-62;
signed char var_9 = (signed char)22;
int var_11 = -1117773915;
int zero = 0;
int var_12 = -1706089374;
short var_13 = (short)29231;
int var_14 = -835055284;
int var_15 = 162449133;
long long int var_16 = 4198856849155893437LL;
unsigned char var_17 = (unsigned char)3;
unsigned int var_18 = 3879372388U;
signed char var_19 = (signed char)3;
int var_20 = 1135434203;
signed char var_21 = (signed char)-21;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)95;
unsigned char var_24 = (unsigned char)82;
unsigned int var_25 = 3671115492U;
unsigned short var_26 = (unsigned short)2709;
unsigned long long int arr_0 [22] ;
unsigned char arr_1 [22] ;
signed char arr_2 [22] ;
long long int arr_3 [22] [22] [22] ;
unsigned char arr_7 [22] ;
unsigned char arr_8 [22] [22] [22] [22] ;
signed char arr_9 [22] [22] [22] [22] ;
unsigned char arr_11 [22] [22] [22] [22] [22] [22] ;
unsigned char arr_15 [22] [22] ;
signed char arr_4 [22] ;
long long int arr_13 [22] [22] [22] ;
unsigned long long int arr_16 [22] ;
unsigned int arr_20 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3190428210081789943ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 7687951216590299778LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned char)217 : (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)147 : (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -6898452880312502264LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 13336413670778354266ULL : 768753984769334976ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 3957553430U : 2436887506U;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
