#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11908;
signed char var_1 = (signed char)-96;
unsigned char var_3 = (unsigned char)167;
long long int var_4 = 1220216433992534295LL;
long long int var_5 = -6064806200216254645LL;
int var_7 = 778070151;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = -745438695767168676LL;
int var_14 = -1464827464;
int var_15 = -1971560604;
unsigned long long int var_16 = 246791299943683742ULL;
unsigned int arr_2 [23] ;
unsigned short arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1816910355U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)24172;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
