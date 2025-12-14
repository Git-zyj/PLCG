#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43554;
short var_1 = (short)-23593;
long long int var_2 = -2882169318467265877LL;
long long int var_4 = -8201981826506192835LL;
short var_5 = (short)23122;
unsigned int var_7 = 3027891759U;
unsigned short var_10 = (unsigned short)13459;
long long int var_11 = -8047191147275029319LL;
unsigned short var_13 = (unsigned short)17335;
int zero = 0;
long long int var_15 = -5342070097390562623LL;
signed char var_16 = (signed char)87;
signed char var_17 = (signed char)50;
long long int var_18 = -3905514356779181663LL;
unsigned int var_19 = 1176992127U;
unsigned char arr_0 [11] ;
unsigned int arr_1 [11] ;
unsigned char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1203176929U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)84;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
