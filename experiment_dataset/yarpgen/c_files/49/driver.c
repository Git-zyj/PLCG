#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3726754292U;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)82;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)13097;
int zero = 0;
short var_20 = (short)29653;
unsigned char var_21 = (unsigned char)242;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 2651424158U;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 3338071039U;
short var_27 = (short)7102;
unsigned short arr_0 [10] ;
unsigned int arr_1 [10] ;
short arr_4 [10] ;
short arr_6 [10] [10] [10] [10] ;
_Bool arr_8 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)10792;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3512012553U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-10135;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-15469;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
