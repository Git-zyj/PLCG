#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1777316807U;
unsigned long long int var_1 = 9200468778431234929ULL;
unsigned long long int var_7 = 7013854060766531628ULL;
int var_9 = 1695087101;
unsigned long long int var_13 = 577768032027074615ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)1961;
unsigned long long int var_18 = 5561507323129082162ULL;
int var_19 = 2143449482;
unsigned char var_20 = (unsigned char)63;
short var_21 = (short)-22085;
unsigned char var_22 = (unsigned char)151;
int var_23 = 738645154;
unsigned char var_24 = (unsigned char)238;
unsigned long long int var_25 = 8179103312937792655ULL;
unsigned long long int var_26 = 12404582961145013809ULL;
unsigned short var_27 = (unsigned short)33388;
_Bool var_28 = (_Bool)0;
long long int var_29 = -1582207478774854709LL;
int var_30 = 1484610050;
unsigned int arr_0 [11] ;
unsigned int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
_Bool arr_3 [11] ;
unsigned short arr_5 [11] [11] ;
short arr_7 [11] ;
unsigned short arr_9 [11] [11] ;
unsigned int arr_12 [19] ;
unsigned long long int arr_13 [19] ;
unsigned int arr_21 [19] ;
short arr_25 [19] [19] [19] [19] ;
unsigned short arr_32 [16] ;
unsigned long long int arr_6 [11] ;
_Bool arr_11 [11] ;
unsigned short arr_14 [19] [19] ;
unsigned short arr_15 [19] [19] ;
unsigned int arr_16 [19] [19] ;
short arr_26 [19] ;
signed char arr_27 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 624364045U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 2831197514U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2819424175506639077ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)63988;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (short)-30705;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)42841;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 3204094475U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 12948795749043276607ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = 2717595604U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (short)29640;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_32 [i_0] = (unsigned short)18633;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 4024943768350040666ULL : 5496529897973853657ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)36331;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)25833;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = 3319272780U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (short)32244;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (signed char)37;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
