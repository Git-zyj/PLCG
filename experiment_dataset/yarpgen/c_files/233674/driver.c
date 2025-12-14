#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 419218074326551313LL;
long long int var_8 = 4129837281498786785LL;
unsigned char var_10 = (unsigned char)80;
long long int var_11 = 2954918122352823154LL;
long long int var_12 = -8452334266295760784LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -944888324986856616LL;
int zero = 0;
unsigned short var_17 = (unsigned short)59285;
unsigned char var_18 = (unsigned char)71;
unsigned long long int var_19 = 17650258905383973159ULL;
signed char arr_0 [25] [25] ;
int arr_3 [25] ;
unsigned short arr_5 [25] [25] [25] ;
_Bool arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 623370910;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)23564;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
