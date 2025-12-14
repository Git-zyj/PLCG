#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
long long int var_3 = 2216742602360692445LL;
unsigned int var_4 = 2174284669U;
int var_5 = -159455890;
unsigned char var_6 = (unsigned char)66;
int zero = 0;
long long int var_10 = -9124280141837524868LL;
signed char var_11 = (signed char)13;
_Bool var_12 = (_Bool)1;
long long int arr_0 [19] ;
int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -2778569136261923390LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1335788511;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
