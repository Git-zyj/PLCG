#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3998962824U;
unsigned int var_1 = 2886827046U;
_Bool var_2 = (_Bool)0;
int var_6 = -1545556009;
unsigned char var_9 = (unsigned char)60;
signed char var_11 = (signed char)-101;
unsigned int var_12 = 485027457U;
signed char var_13 = (signed char)55;
unsigned int var_14 = 1147300963U;
short var_16 = (short)-29309;
int zero = 0;
long long int var_20 = -340388969534314902LL;
unsigned int var_21 = 843179666U;
unsigned int var_22 = 991120398U;
unsigned int arr_0 [20] ;
unsigned char arr_1 [20] ;
unsigned int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3234278979U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2507373232U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
