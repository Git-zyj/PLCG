#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16120359733446965678ULL;
int var_2 = 716273810;
int var_3 = 1166428599;
int var_5 = -1545285177;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2110345287U;
unsigned int var_8 = 1032915879U;
int zero = 0;
short var_10 = (short)-10824;
long long int var_11 = -6026622077002918841LL;
_Bool var_12 = (_Bool)0;
int var_13 = 653478649;
unsigned int var_14 = 3071668426U;
long long int arr_2 [12] ;
unsigned long long int arr_4 [12] ;
int arr_6 [11] ;
long long int arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1478407371734077711LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 3064797348996585214ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 673237437;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -6014649207871363125LL : -6765654194092905458LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
