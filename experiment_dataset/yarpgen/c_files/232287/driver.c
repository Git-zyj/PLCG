#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)21471;
int var_8 = 49393030;
unsigned int var_10 = 980440361U;
unsigned long long int var_15 = 3856170153182048376ULL;
unsigned long long int var_18 = 9245499469268747363ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 6870477783168189582ULL;
int var_22 = -1786800240;
unsigned short var_23 = (unsigned short)18475;
int var_24 = -330325498;
unsigned int var_25 = 1944748243U;
unsigned int var_26 = 548979858U;
unsigned long long int arr_0 [20] [20] ;
_Bool arr_2 [20] ;
_Bool arr_4 [20] [20] ;
long long int arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 16231222158993489860ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 2340721194305922139LL : 5030510210295241515LL;
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
