#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5854;
_Bool var_4 = (_Bool)0;
int var_5 = 272659569;
int var_7 = -1124344277;
unsigned char var_10 = (unsigned char)33;
unsigned int var_11 = 1514075515U;
int zero = 0;
unsigned short var_13 = (unsigned short)61765;
int var_14 = 513485270;
unsigned short var_15 = (unsigned short)2652;
long long int var_16 = 6012126312515218398LL;
_Bool var_17 = (_Bool)1;
long long int arr_0 [14] [14] ;
int arr_1 [14] ;
unsigned int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = -3025596704544041420LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 535647886;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2848677503U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
