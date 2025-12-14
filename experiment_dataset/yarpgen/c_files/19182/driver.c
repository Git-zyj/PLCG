#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -523428573;
long long int var_1 = 1405586776071621155LL;
unsigned char var_2 = (unsigned char)143;
int var_3 = -1610499218;
short var_4 = (short)13748;
short var_5 = (short)-21305;
short var_6 = (short)-4541;
short var_7 = (short)2138;
int zero = 0;
short var_11 = (short)27011;
unsigned long long int var_12 = 17087729515965652818ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)102;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 433851361U;
unsigned char var_17 = (unsigned char)176;
unsigned long long int var_18 = 2025700661886580657ULL;
unsigned int arr_1 [17] [17] ;
unsigned short arr_2 [17] [17] ;
_Bool arr_3 [17] ;
short arr_4 [17] [17] ;
short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 2423773012U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)37434;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (short)29570;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-32123 : (short)-30001;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
