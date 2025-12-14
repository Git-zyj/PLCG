#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8651261871355420022ULL;
unsigned long long int var_3 = 12776358509329534803ULL;
unsigned short var_6 = (unsigned short)57162;
signed char var_8 = (signed char)97;
int var_9 = 156775294;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 11123324182721622739ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)217;
signed char var_13 = (signed char)16;
unsigned int var_14 = 2182573134U;
int var_15 = 36133129;
unsigned long long int arr_0 [10] ;
int arr_6 [10] ;
unsigned int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3412305222854273060ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -1986163785;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 3733025362U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
