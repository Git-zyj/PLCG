#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
short var_1 = (short)16382;
unsigned int var_3 = 1707503709U;
signed char var_5 = (signed char)-34;
unsigned short var_6 = (unsigned short)20736;
long long int var_7 = 5673401948657557582LL;
long long int var_9 = -5875529834645155496LL;
short var_10 = (short)23396;
unsigned int var_11 = 2672048062U;
int zero = 0;
signed char var_12 = (signed char)28;
unsigned int var_13 = 2168653852U;
signed char var_14 = (signed char)10;
unsigned int var_15 = 4187129114U;
short var_16 = (short)6079;
long long int arr_0 [21] [21] ;
long long int arr_1 [21] [21] ;
long long int arr_2 [21] ;
signed char arr_5 [11] [11] ;
int arr_6 [11] ;
unsigned short arr_3 [21] ;
signed char arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 4010600130041511961LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = -3587925940764597010LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -2783322057163452285LL : 5913699176220927400LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)23 : (signed char)104;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = -819331903;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)248 : (unsigned short)39542;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)63 : (signed char)-14;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
