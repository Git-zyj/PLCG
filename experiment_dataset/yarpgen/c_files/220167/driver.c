#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1804890926U;
unsigned char var_3 = (unsigned char)60;
unsigned short var_5 = (unsigned short)7305;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 4660721711599844539ULL;
unsigned char var_8 = (unsigned char)1;
unsigned short var_9 = (unsigned short)36935;
int zero = 0;
unsigned int var_12 = 2734505750U;
unsigned short var_13 = (unsigned short)1850;
unsigned char var_14 = (unsigned char)128;
unsigned short var_15 = (unsigned short)64419;
long long int var_16 = 2806477975059058065LL;
int arr_2 [22] ;
unsigned short arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 2125649252;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)10758;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
