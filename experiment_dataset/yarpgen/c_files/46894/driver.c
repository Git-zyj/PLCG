#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9063778389469615786ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 3213335585147088474ULL;
unsigned long long int var_10 = 1748284507679773503ULL;
unsigned long long int var_11 = 17003615963022069236ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)137;
unsigned long long int var_14 = 6791780123505349600ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 676337011537091961LL;
short var_18 = (short)-12810;
unsigned long long int arr_1 [24] ;
unsigned short arr_2 [24] [24] [24] ;
short arr_3 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1037609474942038738ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)11356;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)16491;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
