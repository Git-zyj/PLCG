#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8602515313760381681LL;
short var_1 = (short)-3351;
unsigned char var_2 = (unsigned char)25;
_Bool var_4 = (_Bool)0;
long long int var_5 = -7554723886548622050LL;
long long int var_7 = 978530930465755475LL;
long long int var_8 = 4628305183423404161LL;
unsigned long long int var_10 = 10279330310885334844ULL;
unsigned char var_12 = (unsigned char)141;
unsigned int var_13 = 3568421690U;
_Bool var_14 = (_Bool)0;
short var_15 = (short)727;
int zero = 0;
long long int var_16 = 8400050108120711523LL;
long long int var_17 = -342534453949859649LL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 4104564083U;
long long int arr_0 [10] [10] ;
_Bool arr_1 [10] ;
unsigned int arr_2 [10] [10] ;
unsigned int arr_3 [10] ;
_Bool arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 4252044501583656696LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 4059319177U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 596050159U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
