#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-10443;
unsigned long long int var_9 = 16237620297678058993ULL;
unsigned long long int var_10 = 2406508072836437128ULL;
signed char var_13 = (signed char)-84;
int zero = 0;
long long int var_14 = 9166657121555044646LL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)126;
_Bool var_17 = (_Bool)0;
long long int arr_1 [23] ;
_Bool arr_2 [23] ;
long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -829471855944986553LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 8424583781811270952LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
