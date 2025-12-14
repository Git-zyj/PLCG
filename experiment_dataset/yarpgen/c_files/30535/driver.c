#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)37251;
int var_5 = -1506934326;
int var_6 = -155092774;
unsigned int var_7 = 3424127046U;
unsigned char var_8 = (unsigned char)239;
int var_9 = 1597889959;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)127;
int zero = 0;
int var_20 = 1634274506;
unsigned int var_21 = 3218855993U;
unsigned int var_22 = 3276536578U;
signed char var_23 = (signed char)107;
unsigned int var_24 = 2866706016U;
unsigned int var_25 = 113981614U;
unsigned int var_26 = 3852337455U;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 2178795569U;
int var_29 = 1155135900;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
int arr_3 [10] ;
int arr_4 [10] ;
_Bool arr_11 [10] [10] [10] ;
unsigned long long int arr_2 [10] ;
unsigned short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 10434024448524774369ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 4400589165809209930ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -1269323468;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1551173606;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1202391726973490600ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)16336;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
