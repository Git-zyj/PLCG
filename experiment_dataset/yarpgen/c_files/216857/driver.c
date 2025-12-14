#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
unsigned short var_1 = (unsigned short)13107;
unsigned int var_3 = 3596337797U;
int var_9 = 326294967;
short var_10 = (short)-19606;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)207;
short var_16 = (short)-32182;
int zero = 0;
unsigned int var_17 = 2210645598U;
_Bool var_18 = (_Bool)1;
long long int var_19 = 679880083713062080LL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-23224;
unsigned long long int var_22 = 12704055732869881090ULL;
int var_23 = 888250398;
long long int var_24 = -6531403227058146707LL;
short arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
short arr_3 [10] ;
long long int arr_6 [12] ;
unsigned char arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)907;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 6392980682714154894ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)20454;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 3659318332522036697LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)205 : (unsigned char)158;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
