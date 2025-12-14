#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)59;
int var_8 = 1066475824;
int zero = 0;
signed char var_11 = (signed char)-115;
unsigned long long int var_12 = 18049648619735151341ULL;
unsigned int var_13 = 3492408333U;
unsigned int var_14 = 2437989286U;
signed char var_15 = (signed char)74;
short var_16 = (short)30138;
unsigned short var_17 = (unsigned short)28671;
unsigned long long int var_18 = 11500095645068256929ULL;
_Bool var_19 = (_Bool)1;
int arr_0 [25] [25] ;
unsigned short arr_4 [21] ;
signed char arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -559708705;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)5325;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-91;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
