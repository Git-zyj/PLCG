#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
long long int var_2 = 8160628251529673530LL;
unsigned long long int var_4 = 16066090102782598826ULL;
signed char var_5 = (signed char)41;
_Bool var_6 = (_Bool)0;
int var_8 = -1898223777;
unsigned short var_9 = (unsigned short)4507;
short var_10 = (short)-27693;
int zero = 0;
int var_11 = 109894740;
unsigned int var_12 = 2545330030U;
unsigned int var_13 = 839824499U;
unsigned int var_14 = 1877729407U;
unsigned short var_15 = (unsigned short)17298;
short var_16 = (short)8193;
int var_17 = -1455185373;
_Bool var_18 = (_Bool)0;
short var_19 = (short)31010;
int var_20 = 1007087734;
_Bool arr_0 [19] ;
unsigned char arr_1 [19] ;
long long int arr_7 [20] ;
signed char arr_8 [20] [20] ;
short arr_2 [19] ;
unsigned long long int arr_5 [13] [13] ;
unsigned char arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 6765288656444973801LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)5050;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 13002050730830056910ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned char)118;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
