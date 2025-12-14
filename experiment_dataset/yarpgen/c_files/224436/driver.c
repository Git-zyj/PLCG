#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6776914365264463148LL;
long long int var_1 = 5513917043230130788LL;
signed char var_4 = (signed char)-21;
short var_5 = (short)-2227;
signed char var_9 = (signed char)20;
int zero = 0;
unsigned int var_10 = 2795325542U;
unsigned short var_11 = (unsigned short)61233;
long long int var_12 = 2973881483881114148LL;
unsigned long long int var_13 = 8595522986388547441ULL;
int var_14 = 550493376;
_Bool arr_2 [21] ;
long long int arr_6 [21] ;
unsigned int arr_7 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 4347856686934187275LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3204543416U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
