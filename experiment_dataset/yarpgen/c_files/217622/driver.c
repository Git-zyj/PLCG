#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -278711275;
int var_3 = -450717017;
int var_6 = 1459164914;
int var_8 = -1061523493;
int var_9 = 1461012283;
int var_11 = 724079851;
int var_12 = -172139459;
int var_13 = 962746284;
int var_14 = -905734054;
int zero = 0;
int var_15 = 1286122769;
int var_16 = 1940753002;
int var_17 = 1333119934;
int var_18 = 1880778556;
int var_19 = 1465948978;
int var_20 = -483080722;
int var_21 = -443505519;
int var_22 = 430537766;
int var_23 = 1268959391;
int var_24 = -320652985;
int var_25 = -1950155594;
int var_26 = -997547502;
int var_27 = 1651005175;
int var_28 = 511478386;
int var_29 = 1707743423;
int var_30 = -983897165;
int var_31 = -2063012523;
int arr_0 [19] ;
int arr_1 [19] ;
int arr_2 [19] ;
int arr_8 [22] ;
int arr_11 [22] [22] ;
int arr_18 [22] [22] [22] ;
int arr_23 [24] ;
int arr_24 [24] ;
int arr_34 [22] [22] [22] [22] ;
int arr_40 [22] [22] [22] [22] [22] ;
int arr_41 [22] [22] [22] [22] [22] ;
int arr_21 [22] [22] [22] ;
int arr_28 [22] ;
int arr_42 [22] [22] [22] ;
int arr_45 [22] [22] ;
int arr_46 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 727255996 : 1822840750;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 703586257;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1448679918 : -152020479;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1978442245 : -1720581664;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = -129527293;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -1301107097;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = 591143616;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = -588647864;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -640966762 : -1634613906;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -2102557509 : -1557929885;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 318252392 : 1768918009;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1993221310 : 365826747;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = -2088301887;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 206567360 : -1026942045;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_45 [i_0] [i_1] = 1905338243;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_46 [i_0] = 1217130152;
}

void checksum() {
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_46 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
