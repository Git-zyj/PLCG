#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1635575935U;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
int var_5 = 390815325;
unsigned int var_6 = 3110648135U;
long long int var_7 = 1776647038406758883LL;
signed char var_9 = (signed char)22;
unsigned short var_11 = (unsigned short)15187;
int zero = 0;
long long int var_12 = -2406649519547842825LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 17678130092905331276ULL;
unsigned long long int arr_4 [23] [23] ;
long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 12798958875980426061ULL : 8135633570498560116ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 4302027760876892017LL : 5494801301347586155LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
