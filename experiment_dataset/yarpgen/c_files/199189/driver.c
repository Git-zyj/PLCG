#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12902;
unsigned long long int var_7 = 16673657999868878417ULL;
unsigned int var_8 = 3808112253U;
unsigned char var_9 = (unsigned char)93;
unsigned int var_11 = 1122098972U;
int zero = 0;
unsigned long long int var_15 = 18298020722801088295ULL;
unsigned char var_16 = (unsigned char)249;
long long int var_17 = 8905412987782053261LL;
short var_18 = (short)-21791;
long long int var_19 = 1333160957790431077LL;
short arr_0 [14] [14] ;
int arr_1 [14] [14] ;
long long int arr_2 [14] ;
signed char arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)16995 : (short)-26523;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 1649504757;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -5255529254830329479LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-112 : (signed char)6;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
