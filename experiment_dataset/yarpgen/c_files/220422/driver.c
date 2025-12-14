#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)3;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-61;
signed char var_9 = (signed char)-47;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = 525850140731294247LL;
signed char var_13 = (signed char)-104;
int var_14 = -2026697669;
signed char var_15 = (signed char)108;
long long int arr_1 [23] ;
long long int arr_2 [23] ;
long long int arr_4 [23] ;
long long int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -6702368150230198980LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -5667361745910815932LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 7236008309406215844LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 2161032937066484060LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
