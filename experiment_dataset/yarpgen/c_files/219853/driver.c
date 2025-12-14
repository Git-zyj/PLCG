#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15342611017257084134ULL;
short var_7 = (short)20405;
unsigned int var_8 = 3982380373U;
_Bool var_9 = (_Bool)1;
long long int var_13 = -3087260069297208830LL;
int zero = 0;
long long int var_15 = -4033217375830922909LL;
int var_16 = 709437864;
int var_17 = 1322456712;
unsigned int var_18 = 1396584997U;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-4970;
unsigned long long int arr_6 [19] ;
short arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 16118520833362265993ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-18027 : (short)-13340;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
