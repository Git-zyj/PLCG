#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22459;
unsigned char var_3 = (unsigned char)236;
unsigned int var_5 = 3836162025U;
unsigned char var_6 = (unsigned char)74;
long long int var_9 = 101355320429558959LL;
int var_13 = -695867962;
long long int var_15 = -2941352312872809226LL;
unsigned short var_16 = (unsigned short)44380;
int var_17 = -178830369;
int zero = 0;
long long int var_18 = -936904472458557971LL;
unsigned long long int var_19 = 7161079442934731834ULL;
int var_20 = 742292308;
unsigned char var_21 = (unsigned char)30;
unsigned int var_22 = 3122098882U;
long long int var_23 = -4012295647594299604LL;
unsigned char arr_8 [16] [16] [16] [16] ;
unsigned int arr_11 [16] ;
unsigned short arr_12 [16] [16] [16] [16] ;
unsigned long long int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)229 : (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 4181385774U : 1138751311U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)42082 : (unsigned short)40957;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 725998575228476544ULL : 14326859903248537062ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
