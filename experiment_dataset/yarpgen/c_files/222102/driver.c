#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1208581650878665064ULL;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int var_7 = 1748196288;
unsigned int var_8 = 1664708997U;
int zero = 0;
short var_11 = (short)5067;
int var_12 = -621698441;
unsigned long long int var_13 = 7655609586251190704ULL;
short arr_0 [19] ;
unsigned int arr_2 [19] ;
unsigned int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-138 : (short)24592;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2350677011U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2256091677U : 1534233558U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
