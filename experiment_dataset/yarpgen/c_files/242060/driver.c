#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36040;
int var_4 = 438981480;
unsigned int var_5 = 3043845282U;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)115;
unsigned long long int var_11 = 5110786012839472129ULL;
signed char var_12 = (signed char)62;
unsigned short var_13 = (unsigned short)42484;
long long int var_14 = -3940009741241296600LL;
int zero = 0;
long long int var_15 = -5808137935401365162LL;
unsigned long long int var_16 = 15048879456146875325ULL;
unsigned char var_17 = (unsigned char)167;
unsigned long long int var_18 = 11992417671239572895ULL;
int var_19 = -1366433003;
long long int var_20 = 3126569013134503814LL;
unsigned long long int arr_3 [23] [23] ;
unsigned char arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 13206400611664171213ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)62;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
