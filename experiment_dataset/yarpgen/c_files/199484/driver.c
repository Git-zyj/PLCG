#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6310571745514140664LL;
long long int var_6 = -663989361571686924LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 11625486589633323630ULL;
unsigned long long int var_20 = 14134564815681507901ULL;
_Bool var_21 = (_Bool)1;
long long int var_22 = 5823356659015251167LL;
int arr_1 [11] ;
unsigned long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1965515293 : 1222084922;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 18439997662015479991ULL : 1052633164693175684ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
