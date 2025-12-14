#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1665513233293908379LL;
int var_2 = 1391959351;
signed char var_3 = (signed char)52;
int var_4 = -823610043;
unsigned long long int var_9 = 17509402511353960636ULL;
unsigned short var_10 = (unsigned short)62635;
long long int var_11 = 737378024863015158LL;
unsigned int var_12 = 753530610U;
unsigned char var_13 = (unsigned char)194;
int var_14 = 651804394;
int zero = 0;
unsigned char var_16 = (unsigned char)186;
unsigned long long int var_17 = 12610263624708383182ULL;
unsigned int var_18 = 2594096040U;
int var_19 = -507409382;
signed char var_20 = (signed char)7;
unsigned long long int var_21 = 3772861561045046919ULL;
unsigned int var_22 = 2302734986U;
signed char var_23 = (signed char)29;
long long int var_24 = -6598672221727964489LL;
unsigned int var_25 = 230793316U;
short var_26 = (short)-18065;
unsigned char var_27 = (unsigned char)185;
int var_28 = -1373973142;
unsigned int var_29 = 3237929211U;
short var_30 = (short)-15522;
int var_31 = -1410916511;
long long int var_32 = -659147311140885213LL;
long long int arr_0 [23] ;
short arr_1 [23] [23] ;
unsigned long long int arr_3 [23] ;
int arr_6 [23] [23] [23] ;
signed char arr_11 [19] ;
signed char arr_12 [19] ;
short arr_13 [19] ;
unsigned int arr_14 [19] ;
unsigned long long int arr_18 [19] [19] ;
long long int arr_2 [23] [23] ;
int arr_7 [23] ;
unsigned int arr_8 [23] [23] ;
unsigned short arr_23 [19] ;
short arr_26 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -7261315288088320141LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-2447;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 13802581374149463801ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1774061542;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (short)-2603;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = 2454437452U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = 4149584452928217673ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 813009208606084947LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 1819805680;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 1692371462U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (unsigned short)36613;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (short)-31931;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
