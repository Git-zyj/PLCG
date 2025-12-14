#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_14 = -8107229834671507890LL;
int zero = 0;
signed char var_16 = (signed char)38;
short var_17 = (short)22330;
long long int var_18 = 4000324774795907378LL;
unsigned char var_19 = (unsigned char)174;
unsigned long long int var_20 = 10321115708101737342ULL;
long long int var_21 = 3607973836209984145LL;
unsigned long long int var_22 = 8546556794759221538ULL;
int arr_1 [13] ;
signed char arr_3 [13] ;
int arr_4 [13] [13] [13] ;
unsigned long long int arr_7 [13] ;
unsigned int arr_9 [13] [13] [13] [13] ;
unsigned char arr_12 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2121502984;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 465878921;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 14870906267565630045ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2889182169U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)144 : (unsigned char)8;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
