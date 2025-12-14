#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7541735995390482170LL;
unsigned short var_3 = (unsigned short)64618;
unsigned short var_4 = (unsigned short)24110;
unsigned long long int var_8 = 7290392096625522126ULL;
short var_13 = (short)-29244;
int zero = 0;
short var_20 = (short)23163;
_Bool var_21 = (_Bool)0;
int var_22 = -81408459;
unsigned long long int var_23 = 14468027676859222749ULL;
unsigned char var_24 = (unsigned char)110;
unsigned short var_25 = (unsigned short)47865;
_Bool arr_0 [24] [24] ;
long long int arr_1 [24] ;
unsigned char arr_4 [10] [10] ;
_Bool arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -8954343476596069968LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
