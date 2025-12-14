#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
unsigned int var_1 = 435481305U;
unsigned short var_2 = (unsigned short)1465;
unsigned char var_4 = (unsigned char)67;
unsigned long long int var_6 = 17843521962358982317ULL;
signed char var_7 = (signed char)119;
unsigned int var_8 = 1469753639U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)31357;
int zero = 0;
short var_11 = (short)29918;
int var_12 = 990960979;
unsigned int var_13 = 3265821604U;
unsigned int var_14 = 4204325796U;
signed char var_15 = (signed char)125;
unsigned short var_16 = (unsigned short)60839;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)26823;
short var_19 = (short)-23344;
unsigned char var_20 = (unsigned char)57;
unsigned short var_21 = (unsigned short)16279;
unsigned short var_22 = (unsigned short)42852;
int var_23 = 26366799;
unsigned char arr_0 [10] [10] ;
short arr_1 [10] [10] ;
signed char arr_5 [10] ;
unsigned short arr_6 [10] [10] [10] ;
unsigned short arr_10 [10] [10] ;
unsigned char arr_13 [23] [23] ;
int arr_15 [23] ;
unsigned int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)21913;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)61142;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)55209;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -114904117 : 417688589;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 4111489649U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
