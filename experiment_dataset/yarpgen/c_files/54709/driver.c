#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)111;
_Bool var_6 = (_Bool)0;
short var_11 = (short)-16653;
long long int var_13 = 8388265680820172125LL;
short var_17 = (short)24740;
int zero = 0;
long long int var_19 = -3962407502629179880LL;
short var_20 = (short)-2204;
unsigned int var_21 = 3698147264U;
unsigned int var_22 = 2710393573U;
int var_23 = 836631465;
int var_24 = 898766445;
int var_25 = 1138975247;
int var_26 = 1640146868;
int var_27 = 1163526580;
unsigned short var_28 = (unsigned short)3063;
unsigned long long int var_29 = 17098611020683297536ULL;
unsigned int var_30 = 2279431849U;
unsigned short var_31 = (unsigned short)29813;
short var_32 = (short)32222;
unsigned short var_33 = (unsigned short)56172;
_Bool var_34 = (_Bool)1;
_Bool arr_0 [11] ;
short arr_1 [11] ;
long long int arr_2 [11] ;
unsigned int arr_7 [11] ;
unsigned char arr_10 [11] [11] [11] [11] [11] ;
long long int arr_11 [11] [11] [11] [11] ;
long long int arr_14 [11] [11] [11] [11] ;
unsigned int arr_15 [11] ;
unsigned char arr_18 [19] ;
unsigned short arr_19 [19] ;
unsigned char arr_20 [19] ;
int arr_22 [19] [19] ;
int arr_27 [22] ;
short arr_34 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)17740;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 6259022450969206469LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 2301158494U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 6824692346691028632LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -7051683907614818245LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = 3483000815U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = (unsigned short)46360;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = 2057080381;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = 634619395;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (short)15147;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
