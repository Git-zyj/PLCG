#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3418120216U;
unsigned long long int var_6 = 5327293379189082405ULL;
unsigned int var_7 = 1512134159U;
signed char var_9 = (signed char)-72;
int var_10 = -1009741320;
unsigned int var_12 = 2089501571U;
unsigned long long int var_13 = 15562645636671970869ULL;
int zero = 0;
unsigned long long int var_14 = 14225441516565449769ULL;
signed char var_15 = (signed char)-24;
unsigned long long int var_16 = 712775321811067112ULL;
unsigned short var_17 = (unsigned short)27117;
signed char var_18 = (signed char)49;
unsigned short var_19 = (unsigned short)17690;
unsigned int arr_0 [19] ;
signed char arr_1 [19] ;
unsigned char arr_2 [19] ;
signed char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3732156266U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-122;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
