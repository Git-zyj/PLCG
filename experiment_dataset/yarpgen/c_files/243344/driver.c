#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1487191825;
long long int var_4 = 2550764374097976488LL;
long long int var_5 = -7758708362504356697LL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 13168550840512347559ULL;
long long int var_11 = 1328911266275722861LL;
unsigned short var_12 = (unsigned short)46812;
unsigned short var_13 = (unsigned short)14004;
long long int arr_1 [25] ;
unsigned short arr_2 [25] ;
int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 8625887519353059880LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)24670;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 1468969570;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
