#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1357871547;
int var_2 = 1831494883;
int var_3 = -881239472;
unsigned short var_6 = (unsigned short)48679;
unsigned long long int var_9 = 6787117619922756590ULL;
unsigned long long int var_16 = 4811228816850973101ULL;
int zero = 0;
short var_17 = (short)855;
long long int var_18 = 4819813560224238854LL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
_Bool arr_0 [11] ;
int arr_1 [11] ;
int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1248233450;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1075718166;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
