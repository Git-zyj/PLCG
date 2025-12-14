#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10081;
unsigned long long int var_8 = 3513667136804988999ULL;
int zero = 0;
int var_13 = -496233070;
signed char var_14 = (signed char)114;
unsigned long long int var_15 = 11948405665742133419ULL;
int var_16 = 1467486428;
unsigned long long int var_17 = 15960671070351431103ULL;
unsigned long long int var_18 = 11305223949635407229ULL;
short var_19 = (short)24085;
int var_20 = -1554845603;
_Bool var_21 = (_Bool)0;
int var_22 = -17691161;
signed char arr_0 [20] ;
int arr_1 [20] [20] ;
unsigned long long int arr_2 [17] [17] ;
unsigned long long int arr_4 [17] ;
short arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -342165561;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 12593992434973842183ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 10891273554000152877ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)14249 : (short)-4046;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
