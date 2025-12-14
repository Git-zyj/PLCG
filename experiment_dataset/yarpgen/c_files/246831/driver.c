#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1492138949U;
long long int var_3 = -1532274890168170980LL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
int var_7 = 402554121;
unsigned short var_8 = (unsigned short)949;
int var_9 = 1298415089;
int zero = 0;
short var_11 = (short)13749;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
_Bool arr_0 [18] ;
unsigned int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1698147681U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
