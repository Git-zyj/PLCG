#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3126094199U;
unsigned short var_6 = (unsigned short)5042;
unsigned long long int var_7 = 17072292926079314785ULL;
long long int var_8 = -2705614082202680890LL;
int zero = 0;
long long int var_12 = 4310338633276186010LL;
long long int var_13 = -1945367647079742962LL;
long long int arr_0 [14] ;
unsigned long long int arr_2 [14] [14] ;
unsigned short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 6956370892389735830LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 10102087749821102483ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)15371;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
