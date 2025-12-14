#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4299183926633691525LL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1366289760U;
int var_3 = 1643717219;
long long int var_4 = -7374450640735424888LL;
long long int var_8 = -9218432622614690956LL;
long long int var_10 = -8356635358575051783LL;
signed char var_12 = (signed char)-124;
int zero = 0;
unsigned long long int var_13 = 11315723492709944724ULL;
int var_14 = 1925266604;
long long int var_15 = 8161769204780727270LL;
_Bool arr_0 [18] [18] ;
unsigned short arr_1 [18] ;
unsigned char arr_2 [18] [18] ;
unsigned int arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)34340;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 3090317942U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
