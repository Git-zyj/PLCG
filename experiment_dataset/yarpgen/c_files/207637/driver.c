#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59775;
short var_2 = (short)-16738;
short var_3 = (short)16199;
unsigned long long int var_5 = 5335555633001367937ULL;
long long int var_8 = -7548398193750642838LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)252;
long long int var_11 = 2593720180829884652LL;
unsigned int var_12 = 2932963698U;
short var_13 = (short)-1759;
unsigned char var_14 = (unsigned char)26;
int var_15 = -1978109979;
long long int arr_1 [22] ;
_Bool arr_4 [22] [22] ;
unsigned int arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -150058020598200144LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 2358486932U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
