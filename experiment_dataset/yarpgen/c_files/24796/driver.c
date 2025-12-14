#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8257003952424988940LL;
unsigned int var_1 = 2357537669U;
unsigned char var_2 = (unsigned char)68;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 3866665048U;
int var_8 = -1752711714;
unsigned short var_9 = (unsigned short)24754;
int zero = 0;
unsigned int var_10 = 3781349699U;
unsigned short var_11 = (unsigned short)62154;
int var_12 = -63732629;
signed char var_13 = (signed char)-61;
unsigned int arr_2 [19] [19] [19] ;
_Bool arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2326123870U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
