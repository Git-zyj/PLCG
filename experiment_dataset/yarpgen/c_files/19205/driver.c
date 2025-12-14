#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2402356526U;
unsigned short var_1 = (unsigned short)19873;
unsigned long long int var_2 = 16670425859607156837ULL;
unsigned long long int var_5 = 18166735665599187793ULL;
unsigned char var_6 = (unsigned char)96;
_Bool var_8 = (_Bool)0;
long long int var_9 = 3837766776779185736LL;
int zero = 0;
unsigned char var_10 = (unsigned char)188;
short var_11 = (short)-12543;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 4931851234050404514ULL;
long long int var_14 = -5403114465014201888LL;
_Bool arr_0 [10] ;
int arr_1 [10] ;
unsigned char arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1915878099;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)235;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
