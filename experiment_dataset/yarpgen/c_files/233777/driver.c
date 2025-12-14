#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-3614;
unsigned short var_9 = (unsigned short)2929;
unsigned char var_10 = (unsigned char)14;
int var_15 = 2018974858;
unsigned char var_17 = (unsigned char)64;
int var_18 = 963740635;
int zero = 0;
int var_20 = -354758813;
unsigned long long int var_21 = 2412688235093480767ULL;
unsigned short var_22 = (unsigned short)23705;
unsigned char var_23 = (unsigned char)229;
unsigned long long int var_24 = 10444161760621353082ULL;
unsigned int var_25 = 1001669143U;
unsigned long long int var_26 = 1568953011400514901ULL;
_Bool var_27 = (_Bool)1;
unsigned long long int arr_0 [15] ;
_Bool arr_1 [15] [15] ;
_Bool arr_3 [15] [15] [15] ;
unsigned short arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 16337761425835123514ULL : 2456598233223214472ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)14219 : (unsigned short)48263;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
