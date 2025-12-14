#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-10506;
int var_7 = -531271703;
short var_11 = (short)29864;
unsigned short var_16 = (unsigned short)59195;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-91;
int zero = 0;
unsigned char var_20 = (unsigned char)72;
signed char var_21 = (signed char)-119;
unsigned int var_22 = 1732674484U;
short var_23 = (short)18045;
unsigned short var_24 = (unsigned short)52984;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 5606953432825260230ULL;
short arr_0 [20] ;
long long int arr_1 [20] ;
unsigned short arr_2 [20] [20] ;
unsigned short arr_3 [20] [20] [20] ;
unsigned int arr_5 [20] ;
int arr_6 [20] [20] [20] [20] ;
unsigned short arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)22982;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2865631951545881338LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)39003;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)4848;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 1577430662U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -2075951008;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)58844;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
