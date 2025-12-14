#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 394422821U;
unsigned long long int var_5 = 17028176161378012301ULL;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 1281656173202754184ULL;
short var_12 = (short)-3977;
int var_13 = -83252138;
unsigned short var_14 = (unsigned short)41686;
_Bool var_15 = (_Bool)0;
long long int var_16 = 5005165310523859366LL;
unsigned short arr_0 [18] [18] ;
unsigned long long int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
_Bool arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)61609;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 4802206629188316056ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 14827566716232345770ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
