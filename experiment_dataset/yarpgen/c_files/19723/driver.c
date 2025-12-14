#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
int var_3 = -1807728715;
unsigned short var_8 = (unsigned short)48004;
int var_9 = 805041665;
int var_10 = 1861003870;
unsigned short var_11 = (unsigned short)50267;
unsigned short var_15 = (unsigned short)13654;
int var_18 = 125958378;
int zero = 0;
unsigned short var_20 = (unsigned short)49306;
int var_21 = -1364382774;
unsigned short var_22 = (unsigned short)51589;
unsigned char var_23 = (unsigned char)199;
int var_24 = -757265609;
unsigned short arr_0 [10] ;
int arr_1 [10] ;
unsigned short arr_2 [10] [10] ;
int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)5857;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1087270060;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)50736;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -127807657;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
