#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17216062212265910000ULL;
long long int var_4 = 8262629592202182124LL;
long long int var_5 = -6083487155544084735LL;
unsigned long long int var_6 = 16226097694697076733ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 3170332245U;
signed char var_10 = (signed char)-32;
int zero = 0;
long long int var_12 = -4268470301597672269LL;
unsigned long long int var_13 = 1748790619849362939ULL;
int var_14 = -1919292551;
int arr_6 [22] ;
unsigned long long int arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2098770898 : 590765702;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 16814160801452825889ULL : 3630576023080292854ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
