#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8959107377695061804LL;
unsigned char var_2 = (unsigned char)38;
_Bool var_5 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 15773990757368643836ULL;
unsigned long long int var_14 = 3005643131688680488ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 9510505690850672888ULL;
int zero = 0;
short var_20 = (short)12511;
unsigned long long int var_21 = 17940454007761042531ULL;
unsigned long long int var_22 = 13274971192885558932ULL;
unsigned char var_23 = (unsigned char)60;
unsigned long long int var_24 = 13941683273156605181ULL;
unsigned long long int var_25 = 2148892016507903771ULL;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)92;
unsigned long long int var_28 = 13041465845772923962ULL;
short var_29 = (short)1272;
short arr_0 [16] ;
unsigned short arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned short arr_4 [20] ;
unsigned char arr_5 [20] ;
unsigned long long int arr_7 [20] [20] [20] ;
short arr_8 [20] ;
unsigned char arr_11 [20] [20] [20] ;
long long int arr_13 [20] ;
long long int arr_16 [20] [20] [20] [20] [20] [20] ;
unsigned char arr_3 [16] ;
unsigned char arr_9 [20] ;
unsigned char arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-20488;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)62105;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 14733605425140442106ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)53337;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 9214251096514350885ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (short)5309;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 6625608925080711821LL : 4408591537620998068LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -5405990499497058488LL : 1451877960244510503LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned char)125;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
