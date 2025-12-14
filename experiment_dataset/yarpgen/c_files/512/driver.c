#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2460510616U;
unsigned long long int var_1 = 10226505721455982075ULL;
unsigned char var_2 = (unsigned char)73;
unsigned short var_4 = (unsigned short)18435;
_Bool var_6 = (_Bool)1;
long long int var_7 = -8834439616905848645LL;
unsigned int var_9 = 1899341876U;
unsigned int var_10 = 1897212515U;
int zero = 0;
unsigned int var_11 = 145123572U;
unsigned short var_12 = (unsigned short)54908;
unsigned short var_13 = (unsigned short)9732;
int var_14 = 539514103;
unsigned short var_15 = (unsigned short)3823;
unsigned int var_16 = 1811882768U;
_Bool var_17 = (_Bool)1;
_Bool arr_0 [23] [23] ;
signed char arr_2 [23] ;
unsigned long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 14451100421879563580ULL : 2926534205311430751ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
