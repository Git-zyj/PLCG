#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -733954610;
long long int var_4 = -1978929083341693672LL;
long long int var_7 = -108940569844211771LL;
short var_9 = (short)21270;
unsigned int var_13 = 3600950210U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 63194964U;
int var_16 = -278077222;
short var_17 = (short)31603;
short var_18 = (short)28896;
_Bool var_19 = (_Bool)1;
long long int arr_0 [14] ;
unsigned int arr_1 [14] ;
unsigned int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -4982242299731056647LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 3275138482U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 767776540U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
