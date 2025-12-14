#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_6 = (unsigned char)149;
int var_7 = 1113848913;
unsigned short var_11 = (unsigned short)51244;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -1394288912505027189LL;
unsigned int arr_0 [19] [19] ;
unsigned int arr_1 [19] ;
unsigned int arr_2 [19] [19] ;
int arr_3 [19] ;
unsigned int arr_4 [19] ;
long long int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 2803853714U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2646883558U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 3370164466U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 957960558;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 1799812709U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -1185587685631477444LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
