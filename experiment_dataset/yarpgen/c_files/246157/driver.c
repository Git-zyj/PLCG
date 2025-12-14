#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 1954463801928604459LL;
short var_2 = (short)-14985;
unsigned short var_3 = (unsigned short)7340;
unsigned short var_4 = (unsigned short)29572;
long long int var_5 = -359523451138123347LL;
unsigned char var_8 = (unsigned char)250;
int var_9 = -1446866660;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)28519;
unsigned short var_12 = (unsigned short)48708;
long long int var_13 = -8538905504044546915LL;
unsigned long long int var_14 = 9399742060581324933ULL;
int zero = 0;
long long int var_15 = -9069196191089056745LL;
long long int var_16 = 1896230302127869417LL;
unsigned short var_17 = (unsigned short)54484;
int var_18 = 697207622;
unsigned char var_19 = (unsigned char)184;
unsigned char var_20 = (unsigned char)178;
short arr_0 [11] ;
int arr_3 [11] ;
long long int arr_4 [11] ;
unsigned char arr_5 [11] [11] [11] ;
unsigned short arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-14254;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 185805169;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 3441183958479032273LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)18281;
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
