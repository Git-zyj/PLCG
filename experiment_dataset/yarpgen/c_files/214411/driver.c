#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5243728448760206609ULL;
unsigned long long int var_1 = 16733932648687886178ULL;
_Bool var_2 = (_Bool)0;
int var_3 = -1412192249;
unsigned long long int var_6 = 17990549475978170382ULL;
signed char var_7 = (signed char)57;
short var_11 = (short)-24073;
int var_12 = 1405230498;
long long int var_13 = 5783931680356576087LL;
int zero = 0;
short var_14 = (short)20111;
unsigned int var_15 = 3419899717U;
unsigned short var_16 = (unsigned short)52229;
long long int var_17 = 7202431407263304293LL;
unsigned long long int var_18 = 9983648712489394256ULL;
long long int var_19 = -3364782732090619767LL;
int var_20 = -945140929;
unsigned long long int var_21 = 14082287541623460981ULL;
signed char var_22 = (signed char)-30;
short var_23 = (short)29941;
short var_24 = (short)-30724;
unsigned long long int arr_1 [21] ;
unsigned long long int arr_2 [21] [21] ;
_Bool arr_3 [21] [21] ;
long long int arr_4 [21] ;
signed char arr_5 [21] [21] [21] [21] ;
unsigned int arr_6 [21] [21] [21] [21] ;
long long int arr_8 [21] [21] ;
long long int arr_10 [21] [21] [21] [21] ;
signed char arr_19 [20] ;
int arr_11 [21] ;
unsigned int arr_17 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 8780682472754000420ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 16036715599787162822ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 3393233388451896980LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 985028798U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = -3310128208437640550LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 5224307828427672157LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = -406992182;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 2628439557U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
