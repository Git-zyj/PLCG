#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7636619129579845575ULL;
unsigned long long int var_1 = 15679039579390677959ULL;
unsigned long long int var_2 = 18265803314022508386ULL;
unsigned long long int var_3 = 3692354033334676375ULL;
unsigned long long int var_5 = 2243706348333343724ULL;
unsigned long long int var_6 = 7727610227807082954ULL;
unsigned long long int var_7 = 17231665804634969938ULL;
unsigned long long int var_8 = 16468176875863526436ULL;
int zero = 0;
unsigned long long int var_10 = 6615153853597773299ULL;
unsigned long long int var_11 = 15230234059906194420ULL;
unsigned long long int var_12 = 14216353886612100322ULL;
unsigned long long int var_13 = 9059412875029510264ULL;
unsigned long long int var_14 = 4619069158122025639ULL;
unsigned long long int var_15 = 17849731643554055798ULL;
unsigned long long int var_16 = 7157428460575987562ULL;
unsigned long long int arr_0 [16] ;
unsigned long long int arr_1 [16] ;
unsigned long long int arr_6 [11] ;
unsigned long long int arr_8 [11] [11] [11] ;
unsigned long long int arr_13 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 4563397832001487848ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1466360670752752161ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 14398240437526916792ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 17492040822319851233ULL : 1417052449866801459ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 8107683813780804098ULL : 17098115899966530220ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
