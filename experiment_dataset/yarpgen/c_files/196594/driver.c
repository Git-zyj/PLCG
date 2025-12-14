#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1096981207;
unsigned char var_4 = (unsigned char)199;
int var_7 = -317792488;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)61911;
unsigned char var_12 = (unsigned char)203;
int var_14 = -1159180758;
int zero = 0;
unsigned short var_15 = (unsigned short)5206;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 714204454U;
unsigned int var_18 = 1338824242U;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
long long int var_22 = -5335477844514325280LL;
long long int arr_1 [23] ;
signed char arr_2 [23] ;
int arr_3 [23] ;
unsigned long long int arr_5 [23] [23] [23] ;
unsigned long long int arr_6 [23] ;
unsigned long long int arr_7 [23] ;
long long int arr_9 [23] [23] [23] ;
long long int arr_13 [23] [23] [23] [23] [23] ;
_Bool arr_17 [23] [23] [23] ;
long long int arr_18 [23] [23] [23] [23] [23] ;
_Bool arr_19 [12] ;
long long int arr_22 [12] ;
unsigned short arr_23 [16] ;
_Bool arr_27 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 4460666233956411321LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 99847608;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 15587612610481521283ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 16464362560999195934ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 6449702736578824737ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -4018392754485820381LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = -7103053271553460668LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 4820620854149789434LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = -4329083315598550068LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (unsigned short)27237;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
