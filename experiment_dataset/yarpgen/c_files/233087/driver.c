#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3656593056830244549LL;
unsigned long long int var_2 = 5626691786381885263ULL;
unsigned char var_3 = (unsigned char)255;
unsigned long long int var_6 = 5054314747510086755ULL;
long long int var_7 = -3179360542598644763LL;
unsigned long long int var_8 = 5830401172567186150ULL;
long long int var_9 = 5279486965443401035LL;
unsigned short var_10 = (unsigned short)11562;
int zero = 0;
unsigned short var_11 = (unsigned short)5448;
unsigned short var_12 = (unsigned short)25878;
unsigned short var_13 = (unsigned short)44770;
unsigned char var_14 = (unsigned char)128;
unsigned short var_15 = (unsigned short)47566;
short arr_0 [10] [10] ;
long long int arr_1 [10] ;
unsigned int arr_2 [10] ;
unsigned int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-562;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -6333178018237346317LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1674052182U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2081090044U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
