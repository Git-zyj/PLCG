#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)23;
_Bool var_4 = (_Bool)0;
long long int var_5 = 4061448352213409042LL;
unsigned char var_7 = (unsigned char)102;
long long int var_8 = 6283217614082943606LL;
int var_11 = -1220234188;
unsigned char var_12 = (unsigned char)240;
int var_14 = 431062557;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_19 = (short)-20898;
unsigned int var_20 = 4052222413U;
long long int var_21 = -4218798603898524967LL;
unsigned char var_22 = (unsigned char)126;
signed char var_23 = (signed char)-89;
_Bool var_24 = (_Bool)1;
long long int var_25 = -7822397485407764825LL;
long long int var_26 = -2672835465208947895LL;
unsigned char var_27 = (unsigned char)29;
long long int var_28 = -4511901787508991624LL;
unsigned int arr_0 [10] [10] ;
int arr_1 [10] ;
unsigned int arr_2 [10] [10] [10] ;
long long int arr_3 [10] [10] ;
_Bool arr_4 [17] ;
int arr_5 [17] [17] ;
unsigned short arr_6 [17] [17] ;
signed char arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 3750858406U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 453733418;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4156828696U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 6623868070680964023LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -1613143484;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)37866;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)118;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
