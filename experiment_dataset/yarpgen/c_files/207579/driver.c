#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 54099392U;
unsigned int var_2 = 2722379136U;
unsigned short var_3 = (unsigned short)36116;
unsigned int var_6 = 2493316822U;
int var_9 = 1976023134;
signed char var_10 = (signed char)-97;
unsigned char var_12 = (unsigned char)207;
unsigned char var_14 = (unsigned char)65;
signed char var_15 = (signed char)120;
unsigned int var_16 = 844586294U;
int zero = 0;
unsigned int var_18 = 923783945U;
unsigned long long int var_19 = 17018751743356468750ULL;
unsigned long long int arr_4 [19] ;
int arr_5 [19] [19] ;
unsigned short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 16025894353885816104ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 532946229;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)55768;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
