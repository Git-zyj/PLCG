#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)160;
unsigned short var_3 = (unsigned short)12906;
unsigned char var_5 = (unsigned char)177;
unsigned int var_6 = 4012001415U;
unsigned short var_7 = (unsigned short)44210;
short var_11 = (short)-28770;
unsigned char var_16 = (unsigned char)149;
unsigned short var_17 = (unsigned short)34900;
int zero = 0;
signed char var_20 = (signed char)125;
unsigned int var_21 = 1828377094U;
signed char var_22 = (signed char)-122;
short var_23 = (short)-5551;
unsigned short var_24 = (unsigned short)50433;
unsigned long long int var_25 = 9867999839538323720ULL;
unsigned long long int var_26 = 11041887837729082401ULL;
unsigned short var_27 = (unsigned short)29435;
unsigned long long int var_28 = 8225548534049544088ULL;
unsigned long long int var_29 = 704019025580027053ULL;
signed char var_30 = (signed char)42;
unsigned char arr_0 [16] ;
unsigned short arr_2 [16] ;
unsigned char arr_5 [18] ;
unsigned long long int arr_6 [18] ;
signed char arr_3 [16] ;
unsigned short arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17696 : (unsigned short)60494;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 17616513995142654355ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-29 : (signed char)-35;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)32707 : (unsigned short)23345;
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
