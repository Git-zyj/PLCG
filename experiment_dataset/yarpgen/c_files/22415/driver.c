#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-5545;
short var_3 = (short)-4162;
unsigned short var_4 = (unsigned short)20000;
unsigned char var_5 = (unsigned char)63;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)57219;
long long int var_10 = 6823503514862121667LL;
unsigned char var_12 = (unsigned char)229;
unsigned char var_13 = (unsigned char)29;
unsigned char var_14 = (unsigned char)0;
long long int var_15 = -4935717042140361306LL;
short var_16 = (short)-4013;
int zero = 0;
unsigned short var_18 = (unsigned short)53894;
short var_19 = (short)24864;
short var_20 = (short)5944;
long long int var_21 = 6046261408663177468LL;
unsigned long long int var_22 = 10721228472797251675ULL;
unsigned long long int var_23 = 1169594113476315123ULL;
long long int var_24 = -1849344788030382913LL;
int var_25 = -1334712724;
signed char var_26 = (signed char)92;
unsigned long long int var_27 = 1722805470895771744ULL;
long long int var_28 = 1656390144644045531LL;
signed char var_29 = (signed char)85;
unsigned long long int var_30 = 2313875954460721649ULL;
signed char arr_0 [12] ;
unsigned char arr_1 [12] ;
unsigned short arr_2 [12] ;
unsigned int arr_3 [12] [12] ;
short arr_5 [12] [12] [12] [12] ;
unsigned char arr_7 [12] [12] [12] [12] ;
unsigned int arr_8 [12] [12] [12] ;
unsigned char arr_10 [12] ;
unsigned long long int arr_11 [12] [12] [12] [12] ;
long long int arr_12 [12] [12] [12] [12] ;
int arr_13 [12] ;
unsigned int arr_17 [12] [12] [12] ;
_Bool arr_19 [12] [12] [12] [12] [12] ;
unsigned short arr_21 [12] [12] [12] [12] [12] [12] ;
unsigned char arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-43 : (signed char)-64;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7638 : (unsigned short)14956;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 3798740127U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)28672;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)115 : (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2835795027U : 1748719278U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 14411246000471101731ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1626456438855289954LL : -5724288736808635322LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 2145038357;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 3539067111U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)57802;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)146 : (unsigned char)246;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
