#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)139;
long long int var_5 = 3840996654520015833LL;
int var_7 = -2122925077;
unsigned long long int var_8 = 11495935659346400787ULL;
unsigned short var_9 = (unsigned short)63503;
unsigned short var_10 = (unsigned short)54030;
int zero = 0;
unsigned long long int var_11 = 13569363002863847056ULL;
_Bool var_12 = (_Bool)1;
int var_13 = -48884333;
unsigned short var_14 = (unsigned short)49571;
unsigned long long int var_15 = 449021322569101842ULL;
unsigned char arr_0 [19] ;
signed char arr_2 [19] ;
long long int arr_3 [19] [19] [19] ;
unsigned char arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 8346633251082999209LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)167;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
