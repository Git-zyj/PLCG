#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56744;
unsigned short var_3 = (unsigned short)28628;
unsigned long long int var_4 = 16840422139297562384ULL;
unsigned long long int var_5 = 15740648482691807809ULL;
unsigned int var_6 = 926415419U;
unsigned short var_7 = (unsigned short)47315;
unsigned short var_8 = (unsigned short)34;
unsigned int var_12 = 2285632239U;
_Bool var_13 = (_Bool)1;
short var_15 = (short)14928;
int zero = 0;
unsigned short var_18 = (unsigned short)40551;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 11769481315508892519ULL;
unsigned long long int var_21 = 6882259151953255262ULL;
short arr_1 [12] ;
long long int arr_3 [12] [12] ;
short arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-23205;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 8847337431555062643LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (short)6384;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
