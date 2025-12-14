#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 301361530;
int var_5 = 1710161151;
unsigned char var_7 = (unsigned char)84;
long long int var_10 = 7639338563052166887LL;
_Bool var_11 = (_Bool)1;
long long int var_15 = -5116038055530482011LL;
int zero = 0;
int var_17 = 416316646;
int var_18 = -1354490516;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7311586009222986500LL;
unsigned int var_21 = 3252660249U;
unsigned long long int arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
long long int arr_2 [22] [22] ;
unsigned long long int arr_3 [22] [22] ;
unsigned long long int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 10581988858040193643ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = -1052908772875856946LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 17160109432031793828ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 13539704024749619593ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
