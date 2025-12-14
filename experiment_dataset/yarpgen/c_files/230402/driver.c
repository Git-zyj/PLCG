#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1953077016U;
unsigned int var_6 = 3471036975U;
unsigned int var_8 = 3230048369U;
unsigned short var_10 = (unsigned short)40703;
long long int var_13 = 6774396778012393171LL;
int zero = 0;
unsigned int var_16 = 2493173117U;
unsigned long long int var_17 = 16466147441094136838ULL;
long long int var_18 = 6616852564115050888LL;
unsigned long long int var_19 = 4863299906234074383ULL;
unsigned int arr_5 [12] ;
unsigned long long int arr_8 [12] ;
int arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 2034722837U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 9298091399439104900ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -1571051310 : 2028262764;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
