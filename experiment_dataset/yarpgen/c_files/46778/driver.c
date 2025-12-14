#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)234;
signed char var_3 = (signed char)67;
unsigned int var_4 = 2154575503U;
unsigned int var_6 = 3787621998U;
unsigned char var_7 = (unsigned char)50;
unsigned int var_8 = 1284560618U;
int zero = 0;
int var_11 = -1584136507;
unsigned char var_12 = (unsigned char)187;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 238638041U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1703305814U;
unsigned int arr_1 [15] ;
unsigned char arr_2 [15] ;
signed char arr_3 [15] ;
unsigned int arr_8 [15] [15] [15] ;
unsigned int arr_10 [15] [15] [15] [15] [15] ;
unsigned short arr_11 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2491068121U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1971947882U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 1655122800U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)12439;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
