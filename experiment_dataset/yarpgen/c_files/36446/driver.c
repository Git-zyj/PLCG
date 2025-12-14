#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13971366028503282485ULL;
long long int var_7 = 8060076060808796088LL;
int zero = 0;
unsigned long long int var_11 = 5363331374266473782ULL;
unsigned long long int var_12 = 14883396757356552384ULL;
signed char arr_1 [21] ;
int arr_3 [21] ;
int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -1073378993;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -683535526;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
