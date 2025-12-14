#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5711280236770306349LL;
unsigned long long int var_8 = 14690183447431554422ULL;
long long int var_9 = -5039300880142578885LL;
long long int var_11 = -8971798106022635019LL;
long long int var_17 = -7469186746627605317LL;
int zero = 0;
unsigned long long int var_19 = 8093538628562697966ULL;
long long int var_20 = 4261460469026458152LL;
short arr_3 [19] [19] ;
signed char arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)4967;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)-94;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
