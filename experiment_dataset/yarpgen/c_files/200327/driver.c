#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3709143133U;
unsigned int var_3 = 3942256855U;
long long int var_8 = 2551050266149509819LL;
unsigned int var_11 = 1616056953U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 156554213U;
long long int var_14 = -8395126622351320878LL;
int zero = 0;
unsigned short var_16 = (unsigned short)42946;
int var_17 = 1379703511;
unsigned int var_18 = 3565159682U;
unsigned short var_19 = (unsigned short)1648;
unsigned int var_20 = 4200775195U;
long long int arr_0 [10] ;
_Bool arr_1 [10] ;
long long int arr_3 [10] [10] ;
unsigned long long int arr_4 [10] [10] [10] ;
unsigned short arr_5 [10] ;
unsigned int arr_7 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 8600984880182601190LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -2685819083031869549LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 4479965829971983755ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)20786;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2588880743U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
