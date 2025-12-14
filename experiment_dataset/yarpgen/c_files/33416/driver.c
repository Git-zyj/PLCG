#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3450595446U;
unsigned int var_1 = 3951668742U;
long long int var_3 = -6982028916770769133LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 9601591137784327789ULL;
unsigned long long int var_8 = 3041347479423669648ULL;
short var_11 = (short)-7303;
short var_18 = (short)17549;
unsigned short var_19 = (unsigned short)34866;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -1849772142431666240LL;
unsigned long long int var_22 = 10502044076209552257ULL;
long long int var_23 = 3607146599672163810LL;
unsigned int var_24 = 3861562635U;
long long int var_25 = -2493275817140593457LL;
unsigned long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 13030613012670540940ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
