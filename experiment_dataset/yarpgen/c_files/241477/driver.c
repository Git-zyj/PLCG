#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4320327922019436605LL;
unsigned long long int var_1 = 17380213329595431506ULL;
unsigned char var_2 = (unsigned char)140;
signed char var_3 = (signed char)-25;
unsigned char var_5 = (unsigned char)4;
unsigned char var_6 = (unsigned char)3;
signed char var_7 = (signed char)-78;
signed char var_8 = (signed char)79;
short var_10 = (short)-4581;
short var_11 = (short)16898;
unsigned char var_12 = (unsigned char)254;
int var_13 = -1892559739;
int var_14 = -1864535394;
int var_15 = 81265414;
unsigned int var_16 = 4255633173U;
int zero = 0;
signed char var_17 = (signed char)-63;
unsigned char var_18 = (unsigned char)200;
unsigned int var_19 = 471971607U;
unsigned short var_20 = (unsigned short)43788;
unsigned char var_21 = (unsigned char)186;
unsigned short var_22 = (unsigned short)1624;
long long int arr_0 [13] [13] ;
unsigned char arr_1 [13] ;
signed char arr_6 [13] ;
unsigned char arr_7 [13] [13] ;
unsigned long long int arr_2 [13] [13] ;
short arr_3 [13] ;
unsigned short arr_4 [13] [13] ;
unsigned int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -8565166538035780204LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 15505743960629402118ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)-24288;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)9871;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 1851146520U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
