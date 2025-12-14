#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22869;
unsigned int var_2 = 678213615U;
short var_4 = (short)-6837;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3490262408U;
short var_7 = (short)947;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)66;
int zero = 0;
signed char var_16 = (signed char)-78;
signed char var_17 = (signed char)-90;
unsigned short var_18 = (unsigned short)50737;
unsigned int var_19 = 1583368720U;
signed char var_20 = (signed char)90;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-16;
short var_23 = (short)416;
unsigned int var_24 = 1287773681U;
signed char var_25 = (signed char)57;
signed char arr_2 [25] [25] ;
signed char arr_3 [25] ;
short arr_7 [25] ;
unsigned int arr_16 [17] [17] [17] ;
signed char arr_5 [25] [25] ;
unsigned short arr_6 [25] ;
_Bool arr_12 [25] [25] ;
signed char arr_13 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-116 : (signed char)41;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (short)-20174;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2237760715U : 291725334U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-82 : (signed char)110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)392 : (unsigned short)13922;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)33 : (signed char)-103;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
