#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54257;
unsigned int var_1 = 4289939314U;
unsigned short var_4 = (unsigned short)18060;
unsigned int var_6 = 1681605281U;
unsigned int var_9 = 4088822394U;
int var_15 = 2069089944;
int var_16 = -477406329;
int zero = 0;
unsigned int var_17 = 3411613791U;
int var_18 = 1741051618;
unsigned short var_19 = (unsigned short)9429;
unsigned long long int var_20 = 3521900023228788084ULL;
int var_21 = 592909712;
unsigned int var_22 = 1301569566U;
short var_23 = (short)17194;
int var_24 = -135973323;
unsigned int var_25 = 3148636958U;
int var_26 = -1039473083;
int var_27 = 1779758077;
unsigned char var_28 = (unsigned char)41;
signed char var_29 = (signed char)-41;
short arr_0 [10] [10] ;
int arr_1 [10] ;
int arr_2 [10] [10] ;
long long int arr_3 [10] ;
signed char arr_4 [10] ;
unsigned char arr_5 [10] [10] [10] ;
signed char arr_6 [10] [10] ;
_Bool arr_7 [10] [10] [10] ;
unsigned int arr_9 [11] ;
int arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)29989;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 686191439;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -1870062785;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -6532445207843519708LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 1860335378U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 799212884;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
