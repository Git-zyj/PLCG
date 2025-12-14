#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3893835469U;
int var_5 = 1993594955;
signed char var_7 = (signed char)29;
_Bool var_11 = (_Bool)0;
short var_16 = (short)15732;
unsigned short var_17 = (unsigned short)58191;
short var_18 = (short)-29192;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)40296;
unsigned long long int var_21 = 2353153116265105651ULL;
_Bool var_22 = (_Bool)1;
int var_23 = -1685908839;
long long int var_24 = -3462615337629516770LL;
long long int var_25 = -3423398322690990248LL;
unsigned char var_26 = (unsigned char)44;
unsigned char var_27 = (unsigned char)18;
long long int arr_0 [12] ;
signed char arr_1 [12] [12] ;
int arr_2 [12] ;
unsigned int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -6924601327106013364LL : 2547436112766103665LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)73 : (signed char)110;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 976657046;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 3195822735U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
