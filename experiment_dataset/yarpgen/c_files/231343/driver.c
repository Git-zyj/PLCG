#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3435680171U;
unsigned long long int var_2 = 13655681290717550721ULL;
short var_3 = (short)27568;
unsigned short var_5 = (unsigned short)1663;
unsigned int var_6 = 611362780U;
unsigned long long int var_7 = 13558788564167109381ULL;
unsigned long long int var_9 = 6923022348863474432ULL;
unsigned long long int var_11 = 17773331218047683450ULL;
unsigned short var_12 = (unsigned short)54816;
int zero = 0;
unsigned long long int var_13 = 9245553638840950460ULL;
unsigned long long int var_14 = 5818257576423305750ULL;
unsigned short var_15 = (unsigned short)63162;
short arr_0 [13] ;
unsigned short arr_1 [13] [13] ;
unsigned long long int arr_2 [13] ;
unsigned long long int arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-14232;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)54041;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 6383512240651349086ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 10624956203920597405ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
