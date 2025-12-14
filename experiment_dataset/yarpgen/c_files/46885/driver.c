#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1582321011U;
unsigned int var_3 = 3744714831U;
unsigned short var_8 = (unsigned short)43574;
unsigned long long int var_9 = 14090531207509798997ULL;
int var_10 = -147938994;
unsigned long long int var_11 = 6897431033026018872ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)119;
unsigned int var_14 = 1592014737U;
signed char arr_0 [17] [17] ;
_Bool arr_1 [17] ;
unsigned long long int arr_2 [17] ;
unsigned int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 8240944949703897305ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 759235160U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
