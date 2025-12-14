#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_5 = (unsigned short)39420;
unsigned int var_6 = 1671887134U;
short var_14 = (short)-30567;
unsigned long long int var_17 = 18420885179258264775ULL;
int var_19 = -545479758;
int zero = 0;
signed char var_20 = (signed char)121;
unsigned int var_21 = 2934090993U;
signed char var_22 = (signed char)98;
unsigned int var_23 = 1385628163U;
signed char var_24 = (signed char)57;
int var_25 = -262900035;
int var_26 = 96039294;
unsigned long long int arr_0 [22] ;
unsigned short arr_1 [22] ;
unsigned long long int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1375512231220784861ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)30414;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 7618124451152674753ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
