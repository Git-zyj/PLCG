#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -830974605950813679LL;
signed char var_6 = (signed char)81;
unsigned char var_8 = (unsigned char)44;
unsigned char var_9 = (unsigned char)196;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)82;
unsigned char var_12 = (unsigned char)111;
unsigned short var_13 = (unsigned short)46430;
unsigned short var_14 = (unsigned short)12680;
long long int var_15 = 2216739287464294255LL;
long long int var_16 = 5521187588009385422LL;
long long int var_17 = -4102272465466676878LL;
long long int var_18 = -5332361992716056421LL;
unsigned char arr_1 [11] ;
unsigned int arr_4 [11] ;
long long int arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1637965618U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8102619036634001690LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
