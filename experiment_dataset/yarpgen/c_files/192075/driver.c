#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -936249873568926159LL;
long long int var_4 = 1466574376699725380LL;
long long int var_7 = 2970594021523609680LL;
unsigned long long int var_10 = 6132898119317997306ULL;
unsigned long long int var_11 = 11046394178043316707ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = -8149122552588062144LL;
unsigned long long int var_15 = 16655608732782074282ULL;
long long int var_16 = -7162412761038011903LL;
long long int arr_0 [15] ;
long long int arr_1 [15] ;
long long int arr_2 [15] [15] ;
long long int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2302272727672386428LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -8500675513599507827LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 7299254372880071862LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = -4986564860624708883LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
