#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)67;
unsigned int var_11 = 1238176047U;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = -5332098416592437005LL;
unsigned long long int var_17 = 9674225086696406150ULL;
long long int var_18 = 3123799210109842039LL;
unsigned long long int var_19 = 13291397114334579382ULL;
short var_20 = (short)-2848;
signed char var_21 = (signed char)108;
long long int var_22 = -8512434056497817569LL;
long long int var_23 = 5545391201313797777LL;
int var_24 = 1041978349;
long long int var_25 = 1600507682596927559LL;
int arr_0 [17] [17] ;
short arr_2 [21] ;
short arr_3 [21] [21] ;
long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -1115807771;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-12070 : (short)13500;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-3588;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 946287252432840239LL : -3272268480799102332LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
