#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2936501292U;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 3040357776U;
unsigned char var_5 = (unsigned char)153;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)194;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)199;
unsigned char var_11 = (unsigned char)59;
unsigned char var_12 = (unsigned char)205;
unsigned char var_13 = (unsigned char)89;
short var_14 = (short)19150;
unsigned char arr_1 [22] [22] ;
unsigned int arr_3 [22] [22] [22] ;
short arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4234345630U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)-15239;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
