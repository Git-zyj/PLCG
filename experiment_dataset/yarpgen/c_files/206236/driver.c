#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 2515348423U;
unsigned char var_9 = (unsigned char)37;
int zero = 0;
short var_13 = (short)-28221;
long long int var_14 = -5630646120004167143LL;
long long int var_15 = -6261723599744513315LL;
long long int var_16 = 3874870517766066191LL;
short var_17 = (short)12601;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)62982;
signed char var_20 = (signed char)-96;
short var_21 = (short)17914;
long long int var_22 = 124207487510281689LL;
unsigned long long int var_23 = 2092610369964435531ULL;
short var_24 = (short)3117;
long long int var_25 = -6191265865093021263LL;
unsigned char var_26 = (unsigned char)228;
signed char arr_0 [12] [12] ;
unsigned int arr_4 [12] [12] ;
unsigned short arr_10 [17] ;
unsigned char arr_12 [17] [17] [17] ;
long long int arr_16 [17] [17] ;
signed char arr_18 [17] [17] ;
long long int arr_19 [17] [17] [17] [17] ;
unsigned char arr_21 [17] [17] [17] [17] [17] ;
unsigned int arr_24 [22] ;
long long int arr_25 [22] ;
signed char arr_26 [22] ;
unsigned int arr_29 [19] [19] ;
unsigned int arr_30 [19] ;
long long int arr_31 [19] [19] ;
int arr_33 [19] [19] ;
unsigned short arr_9 [12] [12] [12] ;
unsigned int arr_22 [17] ;
unsigned int arr_23 [17] [17] ;
long long int arr_27 [22] ;
unsigned long long int arr_28 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 672951274U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6701 : (unsigned short)12115;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)165 : (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = -6302099566788154101LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = -4815997150787577924LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)244 : (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = 3679553757U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = -5736977184629643566LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_29 [i_0] [i_1] = 2526151956U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = 1745929877U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_31 [i_0] [i_1] = 3368219890541650560LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? 1068154456 : -1348535518;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)45751;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 2782105768U : 90489746U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? 932772959U : 372070636U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = -2176939321361506292LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = 6141225161172621552ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
