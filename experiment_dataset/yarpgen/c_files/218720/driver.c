#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9773;
unsigned int var_1 = 2737570110U;
int var_2 = -375439699;
long long int var_3 = 2827603730118530420LL;
unsigned int var_4 = 3198913713U;
unsigned short var_7 = (unsigned short)45910;
unsigned int var_9 = 3660052688U;
int zero = 0;
short var_10 = (short)-15014;
unsigned long long int var_11 = 8620467148907500985ULL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-1563;
signed char var_14 = (signed char)-112;
int var_15 = -1591952098;
int var_16 = 934574943;
unsigned int arr_0 [15] ;
unsigned long long int arr_3 [15] ;
_Bool arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2583993202U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 7325458457023294452ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
