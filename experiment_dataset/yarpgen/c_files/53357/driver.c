#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15978666877556392223ULL;
short var_10 = (short)-6182;
unsigned int var_11 = 3206875441U;
int zero = 0;
unsigned char var_12 = (unsigned char)69;
_Bool var_13 = (_Bool)1;
long long int var_14 = 2951707203200237071LL;
short var_15 = (short)-17957;
unsigned long long int var_16 = 7670751682763101214ULL;
unsigned char var_17 = (unsigned char)226;
unsigned char var_18 = (unsigned char)123;
unsigned long long int var_19 = 1467602281884229678ULL;
unsigned int arr_6 [17] ;
long long int arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 3693589416U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 8037554751654826178LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
