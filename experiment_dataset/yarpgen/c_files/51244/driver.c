#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)63;
unsigned char var_1 = (unsigned char)28;
_Bool var_4 = (_Bool)0;
int var_5 = -1855613412;
unsigned char var_6 = (unsigned char)69;
int var_7 = 2113132663;
unsigned int var_9 = 3869366747U;
int zero = 0;
unsigned char var_11 = (unsigned char)100;
unsigned int var_12 = 1644253778U;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)241;
unsigned short var_15 = (unsigned short)36852;
signed char var_16 = (signed char)29;
int arr_1 [20] ;
unsigned short arr_3 [20] ;
unsigned char arr_6 [20] [20] [20] [20] ;
signed char arr_7 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 874186494;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)18812;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)189 : (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-93;
}

void checksum() {
    hash(&seed, var_11);
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
