#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
signed char var_5 = (signed char)6;
unsigned short var_9 = (unsigned short)5238;
_Bool var_11 = (_Bool)1;
long long int var_13 = -8468135366358128059LL;
signed char var_14 = (signed char)23;
long long int var_18 = 2167442469314767537LL;
int zero = 0;
long long int var_19 = -3605588216865849401LL;
unsigned char var_20 = (unsigned char)55;
unsigned int var_21 = 478752951U;
unsigned int var_22 = 388967117U;
unsigned char var_23 = (unsigned char)218;
int arr_0 [19] ;
int arr_1 [19] ;
unsigned short arr_3 [19] ;
unsigned int arr_5 [19] ;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1505526288;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -398602045;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)32196;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 906227464U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)3801;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
