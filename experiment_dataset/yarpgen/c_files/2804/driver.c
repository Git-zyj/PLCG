#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3960;
unsigned int var_1 = 831681107U;
unsigned short var_3 = (unsigned short)35962;
unsigned char var_9 = (unsigned char)250;
int var_11 = -1095126778;
unsigned long long int var_16 = 2342801090933082811ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)50;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)15418;
unsigned long long int var_20 = 17923954061650994507ULL;
long long int var_21 = -3970594159204267646LL;
_Bool var_22 = (_Bool)1;
unsigned long long int arr_1 [21] [21] ;
unsigned long long int arr_6 [21] [21] ;
short arr_8 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 6045251511575262192ULL : 4619649761273506674ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 6759721545149420820ULL : 6709591941534696375ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-19432;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
