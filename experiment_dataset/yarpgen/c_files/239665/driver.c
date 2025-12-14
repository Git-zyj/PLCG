#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22334;
signed char var_2 = (signed char)-41;
unsigned long long int var_6 = 3647727746852694170ULL;
unsigned short var_10 = (unsigned short)44126;
unsigned char var_12 = (unsigned char)8;
int zero = 0;
signed char var_13 = (signed char)-23;
short var_14 = (short)22154;
unsigned char var_15 = (unsigned char)199;
int var_16 = -1113459481;
long long int var_17 = 6104882406660595687LL;
short var_18 = (short)8699;
signed char var_19 = (signed char)16;
unsigned char arr_0 [12] [12] ;
signed char arr_1 [12] ;
short arr_7 [12] ;
short arr_2 [12] [12] ;
unsigned short arr_3 [12] ;
int arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)24 : (signed char)13;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)-14182;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-8380 : (short)18442;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43807 : (unsigned short)29851;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = -1220052590;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
