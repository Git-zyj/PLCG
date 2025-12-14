#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2522943624U;
unsigned char var_10 = (unsigned char)211;
long long int var_11 = 1325145483699777062LL;
signed char var_12 = (signed char)-40;
unsigned long long int var_15 = 3273021552716994074ULL;
int zero = 0;
signed char var_19 = (signed char)-57;
int var_20 = -858752442;
unsigned short arr_0 [11] [11] ;
short arr_1 [11] ;
unsigned int arr_3 [11] ;
long long int arr_4 [11] ;
short arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)34997;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)8458;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1542913663U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -7414012466493408417LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)11160 : (short)30607;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
