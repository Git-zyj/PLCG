#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
_Bool var_5 = (_Bool)0;
long long int var_6 = 3252947205262541108LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = -5057420116147188815LL;
signed char var_11 = (signed char)40;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)20;
_Bool var_14 = (_Bool)0;
long long int var_15 = -4727384112648302126LL;
signed char var_16 = (signed char)-99;
long long int var_17 = -4277426266636252823LL;
long long int arr_0 [18] [18] ;
long long int arr_2 [18] ;
_Bool arr_3 [18] ;
long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 2876807195641445386LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 4098488094615907495LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -22038133250944050LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
