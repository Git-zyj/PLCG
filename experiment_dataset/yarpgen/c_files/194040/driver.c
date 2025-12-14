#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62522;
unsigned long long int var_5 = 11675846482798143508ULL;
int var_6 = -2120644133;
signed char var_9 = (signed char)64;
unsigned short var_10 = (unsigned short)65447;
int var_11 = 1211096236;
long long int var_12 = -3468261427060277246LL;
unsigned char var_13 = (unsigned char)84;
unsigned int var_14 = 3430931199U;
int var_16 = -950370577;
int zero = 0;
unsigned int var_18 = 3858251291U;
unsigned int var_19 = 825653116U;
signed char var_20 = (signed char)98;
short var_21 = (short)27779;
signed char arr_0 [22] ;
unsigned char arr_1 [22] [22] ;
unsigned long long int arr_2 [22] ;
signed char arr_4 [11] ;
unsigned int arr_5 [11] ;
int arr_3 [22] ;
unsigned long long int arr_6 [11] ;
short arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 7594387692411344758ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 847890744U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2075226649;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 14410693948794143391ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (short)-15366;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
