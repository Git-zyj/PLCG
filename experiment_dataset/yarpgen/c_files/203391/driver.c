#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1301754585U;
unsigned long long int var_3 = 11784272708657093282ULL;
unsigned int var_6 = 1651577358U;
long long int var_7 = 3799816566363889513LL;
short var_9 = (short)-26486;
_Bool var_12 = (_Bool)0;
long long int var_14 = 55485936905405882LL;
signed char var_15 = (signed char)34;
int var_16 = 418506041;
unsigned long long int var_17 = 1932907722311261000ULL;
unsigned int var_18 = 3882871905U;
int zero = 0;
long long int var_19 = 4688423905806482805LL;
unsigned char var_20 = (unsigned char)134;
_Bool var_21 = (_Bool)0;
unsigned int arr_1 [25] ;
int arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 653240308U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -1918413728;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
