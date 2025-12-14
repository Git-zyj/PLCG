#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8194223249175861287LL;
long long int var_5 = -8714016124705300935LL;
unsigned long long int var_10 = 18142929994486098291ULL;
long long int var_11 = 6731935319423008842LL;
int zero = 0;
unsigned char var_19 = (unsigned char)105;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)24541;
int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -2046874340;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 11632568262655760627ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 231575570;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
