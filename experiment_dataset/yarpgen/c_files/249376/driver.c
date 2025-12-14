#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11611153044090617443ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 5613756644679536215ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)231;
unsigned long long int var_13 = 890770974133964291ULL;
int zero = 0;
int var_14 = 1664207314;
unsigned int var_15 = 1089930376U;
short var_16 = (short)30851;
signed char var_17 = (signed char)95;
unsigned char var_18 = (unsigned char)189;
long long int var_19 = 6994004595866227821LL;
unsigned char var_20 = (unsigned char)101;
long long int arr_1 [24] [24] ;
int arr_2 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 8868966791256073347LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 58091430;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
