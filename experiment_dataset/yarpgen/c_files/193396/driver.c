#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2782152438507769019ULL;
signed char var_2 = (signed char)19;
signed char var_3 = (signed char)-8;
unsigned long long int var_4 = 16707441232951230294ULL;
short var_8 = (short)-28528;
unsigned long long int var_9 = 6105282441039821776ULL;
short var_10 = (short)-24334;
unsigned long long int var_11 = 2877659650206940575ULL;
unsigned int var_12 = 1659638832U;
int var_16 = 1975421338;
int zero = 0;
unsigned char var_17 = (unsigned char)91;
_Bool var_18 = (_Bool)1;
short var_19 = (short)18318;
unsigned char var_20 = (unsigned char)41;
unsigned int arr_1 [19] ;
signed char arr_5 [19] ;
short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3593887326U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)-20971;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
