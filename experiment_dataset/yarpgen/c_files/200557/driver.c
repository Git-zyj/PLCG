#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3709190314U;
int zero = 0;
short var_19 = (short)9789;
unsigned int arr_0 [15] ;
long long int arr_1 [15] ;
short arr_2 [15] ;
_Bool arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 302472795U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -2944638447237246930LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)23416;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
