#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
int var_2 = -903505896;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)60115;
unsigned int var_9 = 2014196611U;
unsigned long long int var_13 = 16209508123255559211ULL;
int zero = 0;
int var_14 = -1574676212;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)20459;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1692461844U;
unsigned long long int var_19 = 3906277249560509374ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int arr_1 [20] [20] ;
unsigned long long int arr_5 [20] ;
unsigned long long int arr_7 [20] ;
unsigned int arr_10 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 1537822315741836214ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 873064777074060174ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 13350089620488428862ULL : 2591114747413390184ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 1310100197U : 819881766U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
