#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5905296724478303435LL;
short var_1 = (short)16916;
long long int var_2 = 5328689190560498142LL;
short var_3 = (short)5511;
long long int var_4 = 8179661335440524054LL;
unsigned short var_5 = (unsigned short)3516;
short var_6 = (short)-18457;
unsigned short var_7 = (unsigned short)64819;
short var_8 = (short)-7031;
short var_9 = (short)-29833;
int zero = 0;
long long int var_10 = -4650365903560545298LL;
unsigned short var_11 = (unsigned short)15045;
unsigned short var_12 = (unsigned short)28619;
short var_13 = (short)27338;
unsigned short var_14 = (unsigned short)27213;
unsigned short var_15 = (unsigned short)42989;
long long int var_16 = -2094287337542558893LL;
unsigned short var_17 = (unsigned short)25806;
unsigned short var_18 = (unsigned short)56742;
short var_19 = (short)3675;
short var_20 = (short)2098;
long long int var_21 = -5905612558552106651LL;
long long int var_22 = -8735101495640380490LL;
unsigned short var_23 = (unsigned short)4497;
short var_24 = (short)-5462;
unsigned short var_25 = (unsigned short)44139;
short var_26 = (short)14410;
unsigned short var_27 = (unsigned short)32284;
long long int var_28 = -5832943840100656441LL;
long long int var_29 = -2223047509871410934LL;
long long int var_30 = -1812586017418541742LL;
long long int arr_1 [21] ;
long long int arr_4 [22] [22] ;
long long int arr_7 [22] ;
unsigned short arr_8 [22] [22] ;
unsigned short arr_9 [22] [22] [22] [22] ;
short arr_10 [22] ;
unsigned short arr_11 [23] [23] ;
unsigned short arr_12 [23] ;
unsigned short arr_13 [23] ;
short arr_15 [23] ;
short arr_21 [23] [23] ;
short arr_16 [23] [23] [23] ;
unsigned short arr_17 [23] ;
long long int arr_22 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 6898392196032727408LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 7703124124241221344LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1841475387531560564LL : -2021556979752754540LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)39703;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)35260;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)-30931;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)46461;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)5646;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned short)24380;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (short)-21684;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (short)6090;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)-20575;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (unsigned short)1738;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = -6384141877750367783LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
