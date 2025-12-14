#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2971178276U;
unsigned short var_1 = (unsigned short)53846;
unsigned short var_2 = (unsigned short)65060;
unsigned long long int var_6 = 4940758388238667052ULL;
long long int var_7 = 3156680771353921615LL;
signed char var_9 = (signed char)-44;
unsigned long long int var_10 = 14768009363562711085ULL;
int zero = 0;
signed char var_12 = (signed char)30;
long long int var_13 = -4900932985494778696LL;
short var_14 = (short)3852;
short var_15 = (short)-17603;
short var_16 = (short)-14316;
long long int var_17 = -3089906287123848448LL;
long long int var_18 = -8802275573412990547LL;
int var_19 = -1658049708;
short var_20 = (short)27603;
long long int var_21 = -7302329520297523427LL;
unsigned int var_22 = 3759925528U;
unsigned int arr_1 [11] ;
long long int arr_2 [11] ;
int arr_3 [23] ;
short arr_4 [23] ;
long long int arr_5 [21] ;
signed char arr_6 [21] ;
int arr_8 [21] ;
unsigned long long int arr_9 [21] [21] ;
int arr_10 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3007907764U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 8551965315438075605LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 47979741;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-6534;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 421609674271337162LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = -162769839;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 3164767175839167889ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = -1952916635;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
