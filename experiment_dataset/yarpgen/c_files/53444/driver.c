#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3756;
unsigned long long int var_1 = 6077732759804161533ULL;
unsigned long long int var_3 = 7019820752359005866ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)53922;
int var_9 = -2067302943;
unsigned char var_11 = (unsigned char)91;
int zero = 0;
long long int var_12 = -3385810941202111204LL;
long long int arr_2 [19] ;
unsigned int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 4828975578652302914LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 149121347U;
}

void checksum() {
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
