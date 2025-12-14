#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44702;
int var_5 = -1582075168;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 5978856004957490212ULL;
_Bool var_9 = (_Bool)1;
long long int var_11 = 3304644619299851641LL;
unsigned long long int var_12 = 7296649079195227867ULL;
unsigned short var_13 = (unsigned short)61157;
long long int var_14 = -6622975596776725282LL;
unsigned char var_15 = (unsigned char)29;
int zero = 0;
unsigned long long int var_16 = 17225092678186086270ULL;
long long int var_17 = 6164543839996759883LL;
short var_18 = (short)13552;
unsigned long long int var_19 = 15958010039992299698ULL;
_Bool arr_0 [17] ;
unsigned short arr_1 [17] ;
signed char arr_2 [17] ;
unsigned char arr_3 [17] ;
unsigned int arr_4 [17] [17] ;
_Bool arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)59241;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 3102180391U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
