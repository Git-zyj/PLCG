#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 374785363478828591LL;
long long int var_2 = -1378247454755833891LL;
long long int var_5 = 292104544097689457LL;
long long int var_6 = -1758626762846132772LL;
long long int var_7 = -5112610820105622107LL;
long long int var_8 = -7342183024348217859LL;
long long int var_9 = 4007636489182773072LL;
long long int var_10 = -4178290990818005615LL;
long long int var_11 = 3536641835910957928LL;
long long int var_12 = -2284513594228773872LL;
long long int var_16 = -1377467272057114037LL;
int zero = 0;
long long int var_18 = -3579650156515063137LL;
long long int var_19 = 1570538627279463910LL;
long long int var_20 = -5219239517364671330LL;
long long int var_21 = -178169919160037613LL;
long long int var_22 = -2397284196793905780LL;
long long int var_23 = 3040201312125798814LL;
long long int var_24 = 48403331387127375LL;
long long int var_25 = 5089907976746636067LL;
long long int var_26 = -3607785561166665570LL;
long long int var_27 = -9222783374587702659LL;
long long int var_28 = 3995029366064217367LL;
long long int var_29 = 6746481197388541084LL;
long long int var_30 = -8905251239194282260LL;
long long int arr_0 [20] ;
long long int arr_1 [20] ;
long long int arr_2 [25] ;
long long int arr_4 [25] [25] [25] ;
long long int arr_5 [25] [25] [25] ;
long long int arr_6 [25] [25] [25] ;
long long int arr_7 [25] [25] [25] ;
long long int arr_9 [25] [25] ;
long long int arr_10 [25] [25] [25] ;
long long int arr_12 [25] [25] [25] [25] [25] ;
long long int arr_8 [25] [25] ;
long long int arr_13 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -5352311833442130727LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -3621872322450481135LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 5393152111454597917LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -7932693436726171826LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 5944801690001573373LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -8541081799391600485LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -3846114449033927725LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = -118302525701413701LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3051083073568068456LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = -5865617454553069984LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = -6777008975382631785LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 1439703973808914364LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
