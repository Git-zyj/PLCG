#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4306341818008417242LL;
long long int var_2 = 1418900868498695620LL;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)232;
_Bool var_9 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)-109;
unsigned long long int var_17 = 7838789313143522355ULL;
unsigned char var_18 = (unsigned char)18;
signed char arr_0 [21] ;
unsigned long long int arr_2 [21] [21] ;
short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 11584685894905028093ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-15423;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
