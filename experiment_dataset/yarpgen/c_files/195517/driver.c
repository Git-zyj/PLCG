#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 703310468U;
unsigned int var_1 = 3935434983U;
unsigned long long int var_4 = 8539467156555591485ULL;
unsigned int var_5 = 3712516158U;
unsigned char var_10 = (unsigned char)100;
unsigned int var_12 = 2533039336U;
int zero = 0;
unsigned long long int var_13 = 3000506557250629699ULL;
unsigned int var_14 = 4291771002U;
unsigned long long int var_15 = 2720048335632753834ULL;
unsigned int var_16 = 2033403224U;
unsigned char var_17 = (unsigned char)139;
unsigned long long int arr_3 [11] [11] ;
unsigned int arr_5 [11] [11] ;
unsigned int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 8590826215347361824ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 2501934622U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 608235600U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
