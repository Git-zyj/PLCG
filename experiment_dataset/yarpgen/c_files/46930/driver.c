#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14073943654745449783ULL;
unsigned char var_6 = (unsigned char)141;
unsigned char var_7 = (unsigned char)213;
signed char var_9 = (signed char)32;
unsigned short var_10 = (unsigned short)28661;
long long int var_11 = -3853516549770685984LL;
signed char var_13 = (signed char)53;
int var_14 = 314414580;
int zero = 0;
unsigned int var_16 = 3153622559U;
unsigned int var_17 = 3076453328U;
long long int var_18 = 6921849060361117071LL;
signed char var_19 = (signed char)-16;
unsigned long long int arr_0 [23] [23] ;
_Bool arr_1 [23] [23] ;
unsigned char arr_4 [23] ;
_Bool arr_5 [23] [23] [23] ;
unsigned long long int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 10526064989600900904ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 11374390562736665662ULL : 13082037010810048975ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
