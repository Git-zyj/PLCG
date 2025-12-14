#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1975816346;
int var_2 = -1551143044;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 4373254607159598082ULL;
unsigned char var_5 = (unsigned char)226;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)121;
signed char var_8 = (signed char)-48;
unsigned short var_9 = (unsigned short)39145;
long long int var_10 = 4276623321639776862LL;
int zero = 0;
long long int var_11 = -5326637334283002386LL;
unsigned short var_12 = (unsigned short)35869;
long long int var_13 = -7660706156034699933LL;
unsigned long long int var_14 = 5061736869130852202ULL;
unsigned char var_15 = (unsigned char)226;
signed char var_16 = (signed char)-40;
signed char var_17 = (signed char)23;
int var_18 = -707361846;
long long int var_19 = -3312450191145924716LL;
long long int arr_0 [24] ;
signed char arr_1 [24] ;
signed char arr_2 [24] ;
signed char arr_3 [24] [24] [24] ;
int arr_5 [24] [24] [24] ;
int arr_6 [24] ;
short arr_10 [24] [24] [24] [24] [24] ;
int arr_11 [24] [24] [24] ;
unsigned char arr_12 [24] [24] [24] [24] [24] ;
unsigned char arr_13 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 7919308849760041926LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1266474450;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 147710098;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-3739;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -791244039 : 81974137;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)117 : (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)44 : (unsigned char)227;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
