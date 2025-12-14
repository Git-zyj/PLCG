#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 10128899667159146804ULL;
int var_5 = -704762014;
long long int var_6 = -9158733919027705162LL;
int var_7 = -1368940206;
int var_8 = 1580779742;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 3605411685U;
unsigned long long int var_12 = 13827520436842673546ULL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
long long int var_15 = 3999846195288661003LL;
_Bool arr_0 [21] ;
int arr_2 [21] ;
long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1162143193;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1024900381104511809LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
