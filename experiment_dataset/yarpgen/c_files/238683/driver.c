#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20579;
unsigned short var_2 = (unsigned short)4010;
unsigned short var_4 = (unsigned short)46813;
unsigned int var_5 = 4038505722U;
long long int var_7 = -7749643361466562924LL;
unsigned long long int var_9 = 5746446271137301686ULL;
unsigned short var_10 = (unsigned short)53726;
unsigned long long int var_11 = 6319422109832027334ULL;
unsigned long long int var_12 = 17949784801277456011ULL;
int zero = 0;
signed char var_13 = (signed char)123;
unsigned short var_14 = (unsigned short)17912;
unsigned int var_15 = 3567464174U;
long long int var_16 = 9067931076274371574LL;
unsigned short arr_0 [12] [12] ;
unsigned char arr_1 [12] [12] ;
unsigned long long int arr_2 [12] ;
unsigned long long int arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)43431;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 16399746647356804337ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 18407273118359446889ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
