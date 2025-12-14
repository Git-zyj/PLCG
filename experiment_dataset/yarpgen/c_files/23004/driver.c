#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7123791532309658359ULL;
unsigned long long int var_2 = 244940207004818393ULL;
unsigned int var_3 = 3929203206U;
unsigned int var_4 = 3853902078U;
unsigned short var_5 = (unsigned short)4863;
unsigned long long int var_6 = 15329561187353110859ULL;
long long int var_7 = 5029446880598209235LL;
int var_8 = 1609175094;
unsigned long long int var_9 = 14491260886368638902ULL;
short var_10 = (short)15712;
unsigned short var_11 = (unsigned short)55339;
int zero = 0;
long long int var_12 = -8466962928445007694LL;
short var_13 = (short)14772;
_Bool var_14 = (_Bool)0;
int var_15 = 488296646;
unsigned int var_16 = 846375157U;
unsigned long long int var_17 = 11861418857104006065ULL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-10780;
_Bool var_20 = (_Bool)0;
int var_21 = -942863808;
unsigned short var_22 = (unsigned short)2854;
unsigned char var_23 = (unsigned char)223;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 2095330392293076584ULL;
unsigned long long int var_26 = 8515998363541398308ULL;
unsigned short var_27 = (unsigned short)61838;
_Bool var_28 = (_Bool)1;
unsigned short arr_0 [23] ;
unsigned int arr_1 [23] [23] ;
unsigned int arr_3 [23] ;
short arr_5 [23] [23] ;
_Bool arr_6 [23] [23] ;
unsigned int arr_7 [23] [23] ;
short arr_8 [23] ;
unsigned long long int arr_9 [23] ;
unsigned long long int arr_11 [23] [23] [23] [23] ;
unsigned int arr_15 [23] [23] ;
short arr_2 [23] ;
unsigned short arr_16 [23] [23] [23] [23] [23] ;
short arr_20 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)12720;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 4164921044U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1801452244U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)28121;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 3136988507U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)-26584;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 4724824188817193994ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 14056850431660203147ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = 3293993529U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-26060;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)52481;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (short)-12781 : (short)-11486;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
