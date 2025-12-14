#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13554;
short var_2 = (short)-16044;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 17899389329607277720ULL;
short var_6 = (short)28186;
unsigned char var_7 = (unsigned char)122;
unsigned char var_8 = (unsigned char)246;
unsigned char var_10 = (unsigned char)241;
short var_11 = (short)-17168;
unsigned char var_12 = (unsigned char)14;
unsigned char var_13 = (unsigned char)84;
unsigned long long int var_14 = 5608411546014643277ULL;
unsigned long long int var_15 = 8065525499073650354ULL;
int zero = 0;
short var_17 = (short)-14487;
unsigned char var_18 = (unsigned char)245;
unsigned long long int var_19 = 5547598448363568512ULL;
unsigned char var_20 = (unsigned char)247;
short var_21 = (short)21857;
unsigned long long int var_22 = 5300517373577872403ULL;
_Bool arr_0 [16] [16] ;
unsigned long long int arr_1 [16] ;
_Bool arr_7 [16] [16] [16] [16] ;
short arr_10 [25] [25] ;
unsigned char arr_11 [25] ;
unsigned char arr_14 [25] [25] [25] ;
unsigned char arr_9 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 8582795957592859462ULL : 7474373396173046875ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (short)16136;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)65 : (unsigned char)54;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
