#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1360659441U;
long long int var_3 = 5315435616462192064LL;
int var_4 = -877938107;
unsigned int var_5 = 3234606250U;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)17;
long long int var_13 = -7514766131828479619LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 13342332405188128211ULL;
unsigned long long int var_20 = 4271973548102320715ULL;
long long int var_21 = -4403787699768849942LL;
long long int var_22 = 723008754415896417LL;
unsigned int arr_0 [17] [17] ;
_Bool arr_1 [17] ;
long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 2366826373U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -8909224067666329845LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
