#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4273803082U;
long long int var_2 = 8340601251315903498LL;
unsigned int var_3 = 1705212286U;
int var_4 = -250675738;
short var_6 = (short)2900;
unsigned char var_8 = (unsigned char)80;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-12619;
unsigned char var_14 = (unsigned char)225;
long long int var_15 = 5204794191496847213LL;
unsigned int var_16 = 91259468U;
int var_17 = -1505790615;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)45704;
_Bool var_20 = (_Bool)1;
unsigned short arr_0 [22] ;
long long int arr_1 [22] [22] ;
long long int arr_2 [22] ;
unsigned int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)36680;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -3939124454419247685LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -1201611439859911340LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1421271003U : 2746700136U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
