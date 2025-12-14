#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7761660546473423282LL;
short var_5 = (short)15910;
signed char var_7 = (signed char)-117;
short var_9 = (short)-9049;
int zero = 0;
unsigned short var_14 = (unsigned short)19140;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 2024036904321391967ULL;
unsigned long long int var_17 = 9628642384311838349ULL;
unsigned short var_18 = (unsigned short)12968;
unsigned char arr_0 [12] [12] ;
unsigned int arr_1 [12] ;
unsigned short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)165 : (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2512508992U : 2613040651U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)40876;
}

void checksum() {
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
