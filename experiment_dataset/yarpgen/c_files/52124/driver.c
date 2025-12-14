#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)209;
short var_5 = (short)10964;
unsigned short var_6 = (unsigned short)8775;
int var_9 = 2078992084;
long long int var_11 = -5394331296912754731LL;
unsigned char var_12 = (unsigned char)90;
int zero = 0;
long long int var_13 = -5627248090109147556LL;
short var_14 = (short)15645;
long long int var_15 = -550635790629882429LL;
int arr_1 [19] ;
int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 581966276;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 633085506 : 1841401384;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
