#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15689;
unsigned short var_13 = (unsigned short)23739;
signed char var_14 = (signed char)-99;
unsigned short var_17 = (unsigned short)26816;
int zero = 0;
int var_18 = 1359975494;
signed char var_19 = (signed char)-49;
unsigned int var_20 = 2137503040U;
unsigned char var_21 = (unsigned char)155;
int var_22 = 1101400609;
unsigned char var_23 = (unsigned char)175;
int arr_0 [11] ;
unsigned char arr_3 [14] ;
signed char arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -1899013831;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-80;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
