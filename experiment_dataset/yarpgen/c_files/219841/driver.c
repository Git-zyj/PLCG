#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8462757812995481851LL;
int var_6 = -52791675;
unsigned short var_8 = (unsigned short)34948;
long long int var_15 = 8231503373115589855LL;
int zero = 0;
short var_16 = (short)-6914;
signed char var_17 = (signed char)17;
unsigned short var_18 = (unsigned short)5516;
int arr_1 [17] ;
int arr_2 [17] ;
unsigned long long int arr_3 [17] ;
long long int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2086821787;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -970487440;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1747340318834132624ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = -8640176777050357671LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
