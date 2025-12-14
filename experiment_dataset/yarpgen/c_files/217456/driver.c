#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)105;
long long int var_5 = -6813902805366976460LL;
long long int var_7 = -5708787477197306053LL;
short var_9 = (short)30020;
unsigned long long int var_10 = 2405381294166048180ULL;
unsigned long long int var_18 = 16811774605971923782ULL;
int zero = 0;
unsigned long long int var_20 = 12237918234662133419ULL;
unsigned long long int var_21 = 17629037366360374704ULL;
int var_22 = -1094270675;
int var_23 = -2113280243;
int var_24 = 546642089;
signed char var_25 = (signed char)-47;
int var_26 = 688287349;
unsigned char var_27 = (unsigned char)33;
unsigned short var_28 = (unsigned short)19496;
unsigned long long int var_29 = 17684208699134371055ULL;
long long int arr_1 [25] [25] ;
unsigned long long int arr_8 [25] ;
signed char arr_9 [25] [25] [25] ;
unsigned char arr_10 [25] [25] [25] ;
int arr_11 [25] [25] [25] [25] ;
signed char arr_13 [24] [24] ;
signed char arr_14 [24] ;
signed char arr_16 [24] ;
unsigned char arr_19 [19] ;
signed char arr_17 [24] ;
long long int arr_18 [24] ;
unsigned long long int arr_22 [19] ;
int arr_27 [19] ;
unsigned short arr_28 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -7330200402181352912LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 9746579964492081842ULL : 3769121377624419473ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1500297597;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = -1460501610283028896LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = 13163747729819270700ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = 886878596;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned short)9701;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
