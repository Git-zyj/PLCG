#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
unsigned int var_2 = 1396737817U;
_Bool var_3 = (_Bool)0;
long long int var_5 = -5787310518907333973LL;
short var_7 = (short)-19208;
short var_8 = (short)12570;
int zero = 0;
unsigned char var_13 = (unsigned char)137;
unsigned char var_14 = (unsigned char)5;
unsigned char var_15 = (unsigned char)44;
unsigned short var_16 = (unsigned short)32906;
unsigned int var_17 = 3331977843U;
unsigned char var_18 = (unsigned char)59;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)228;
unsigned long long int var_21 = 3248034996501445311ULL;
short var_22 = (short)-837;
unsigned char var_23 = (unsigned char)194;
unsigned short var_24 = (unsigned short)48406;
unsigned int var_25 = 891971665U;
short var_26 = (short)-4667;
_Bool var_27 = (_Bool)1;
unsigned int arr_0 [22] ;
unsigned int arr_1 [22] ;
unsigned int arr_2 [22] ;
unsigned int arr_3 [10] ;
unsigned short arr_6 [16] ;
short arr_8 [16] [16] ;
unsigned long long int arr_9 [16] ;
unsigned long long int arr_10 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 411675210U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 451085305U : 2047477000U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2152686830U : 3633202470U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 4101328826U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)45590;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (short)28807;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 7649308638921488232ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = 2936495570092314856ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
