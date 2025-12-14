#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-2;
unsigned int var_3 = 2645289828U;
unsigned char var_4 = (unsigned char)58;
unsigned long long int var_5 = 2835276413966941170ULL;
unsigned long long int var_6 = 2731187902374843475ULL;
unsigned int var_7 = 893977887U;
unsigned short var_9 = (unsigned short)28663;
short var_10 = (short)4894;
long long int var_12 = -2495758090613892568LL;
signed char var_13 = (signed char)91;
int zero = 0;
unsigned char var_14 = (unsigned char)145;
signed char var_15 = (signed char)-101;
signed char var_16 = (signed char)-100;
signed char var_17 = (signed char)-54;
signed char var_18 = (signed char)-44;
signed char var_19 = (signed char)66;
unsigned short var_20 = (unsigned short)24810;
long long int arr_1 [14] ;
unsigned short arr_3 [12] ;
unsigned short arr_4 [12] ;
unsigned short arr_2 [14] ;
int arr_5 [12] ;
unsigned char arr_6 [12] ;
unsigned long long int arr_7 [12] ;
unsigned char arr_11 [12] [12] ;
unsigned int arr_15 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -2850300097650316143LL : 1891071566450778928LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)53081;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)50297;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29454 : (unsigned short)43166;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 387305884;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 1902193914573955753ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)164 : (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 441457705U : 2640114026U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
