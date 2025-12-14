#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1488316594;
int var_1 = 1720702238;
int var_2 = -863943106;
int var_4 = 1990849262;
int var_5 = -737068558;
int var_6 = 1951537983;
int var_7 = 13349927;
int var_8 = 919664039;
int var_9 = -891783740;
int var_10 = 727658271;
int var_11 = 1847238525;
int var_12 = 1739047669;
int var_13 = 362391296;
int var_14 = -2073643028;
int zero = 0;
int var_16 = -1384278370;
int var_17 = 2081540478;
int var_18 = 1017254829;
int var_19 = -1974410081;
int var_20 = 2042899627;
int var_21 = -1047727422;
int var_22 = -182466843;
int var_23 = 2068716862;
int var_24 = 723459332;
int var_25 = -592029537;
int var_26 = -584387868;
int var_27 = -2014735754;
int var_28 = 1615219476;
int var_29 = -871287352;
int var_30 = 732767293;
int var_31 = -441414318;
int var_32 = 271886401;
int var_33 = 1321068000;
int var_34 = 1064841711;
int var_35 = 1107527238;
int var_36 = 1060737301;
int var_37 = 718013144;
int arr_10 [20] [20] [20] ;
int arr_29 [10] [10] [10] [10] [10] ;
int arr_37 [22] ;
int arr_38 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 695985463;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -434819066 : 1559905019;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? -1238757475 : -975892237;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? 1223761438 : -266969433;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
