#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)58618;
unsigned short var_5 = (unsigned short)16987;
long long int var_10 = -7279200620210665154LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1373717606U;
short var_14 = (short)3868;
int zero = 0;
unsigned int var_15 = 3147182241U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)44805;
unsigned int var_18 = 2972692061U;
unsigned int var_19 = 3436125310U;
short var_20 = (short)25679;
unsigned long long int var_21 = 5430675695217236807ULL;
long long int arr_0 [24] ;
unsigned char arr_3 [17] ;
int arr_12 [17] [17] ;
_Bool arr_13 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 443331016133208852LL : -9051149744634786714LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = 1692100650;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
