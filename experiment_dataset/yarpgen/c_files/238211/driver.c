#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_5 = (signed char)38;
int var_8 = 224471793;
unsigned int var_12 = 1174446272U;
long long int var_13 = 5987872883793934639LL;
int zero = 0;
long long int var_15 = 7120799214688628067LL;
unsigned long long int var_16 = 898444110737308592ULL;
unsigned long long int var_17 = 16417157327613348725ULL;
signed char var_18 = (signed char)95;
unsigned char var_19 = (unsigned char)252;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-58;
unsigned int arr_0 [25] ;
unsigned int arr_1 [25] [25] ;
unsigned char arr_2 [25] ;
unsigned short arr_4 [25] ;
unsigned int arr_7 [25] [25] ;
int arr_8 [25] ;
long long int arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1028607518U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 971019573U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)21601;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 2963100657U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = -1410198985;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = -7929207099890118195LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
