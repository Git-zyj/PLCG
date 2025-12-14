#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31243;
short var_2 = (short)-13616;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)92;
unsigned int var_9 = 3044229385U;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
long long int var_15 = 5957486993669780464LL;
long long int var_16 = -776842611518107127LL;
unsigned long long int var_17 = 791747422837560486ULL;
long long int var_18 = 7341128214910069222LL;
short var_19 = (short)-13904;
short var_20 = (short)26432;
_Bool var_21 = (_Bool)0;
short var_22 = (short)23137;
unsigned char var_23 = (unsigned char)149;
long long int var_24 = 1306103847130977154LL;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 2247716131U;
short arr_0 [19] ;
unsigned long long int arr_1 [19] ;
signed char arr_2 [18] ;
long long int arr_3 [18] ;
unsigned int arr_4 [18] ;
long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)14815;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 15458037354803180411ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 623595747792625052LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1931966936U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -5987703860972112856LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
