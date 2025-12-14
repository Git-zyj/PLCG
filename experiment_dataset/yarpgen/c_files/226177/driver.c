#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1786281315U;
long long int var_3 = 1290528793606159553LL;
unsigned char var_4 = (unsigned char)6;
unsigned char var_5 = (unsigned char)254;
_Bool var_6 = (_Bool)0;
long long int var_7 = 251227926937874193LL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)79;
unsigned int var_11 = 1639624362U;
unsigned char var_12 = (unsigned char)9;
unsigned int var_13 = 1336649950U;
int zero = 0;
unsigned char var_14 = (unsigned char)130;
short var_15 = (short)-16285;
unsigned char var_16 = (unsigned char)5;
short var_17 = (short)3582;
int var_18 = 726115884;
unsigned char var_19 = (unsigned char)200;
int var_20 = -871058764;
long long int var_21 = -3077452893879846782LL;
unsigned char var_22 = (unsigned char)84;
unsigned int var_23 = 3079622692U;
int var_24 = 2038210409;
unsigned int var_25 = 763218691U;
unsigned char var_26 = (unsigned char)228;
unsigned short var_27 = (unsigned short)52221;
_Bool var_28 = (_Bool)1;
short var_29 = (short)-11981;
short var_30 = (short)-1911;
unsigned int var_31 = 2111846838U;
unsigned char var_32 = (unsigned char)155;
unsigned int arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned int arr_2 [11] [11] ;
int arr_3 [16] [16] ;
unsigned char arr_4 [16] ;
unsigned char arr_8 [16] [16] [16] [16] ;
_Bool arr_9 [19] ;
short arr_10 [19] ;
unsigned char arr_13 [19] [19] ;
unsigned int arr_19 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1090549004U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 269996804U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -1112175651;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (short)-7969;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = 700101843U;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
