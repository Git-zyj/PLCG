#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5891780080536824795LL;
unsigned char var_4 = (unsigned char)96;
unsigned long long int var_8 = 8530310605861698435ULL;
unsigned short var_9 = (unsigned short)54606;
unsigned long long int var_12 = 5506506340868040276ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)30;
unsigned short var_14 = (unsigned short)28882;
int var_15 = 1892230185;
short var_16 = (short)20872;
unsigned char var_17 = (unsigned char)254;
short var_18 = (short)4512;
unsigned int var_19 = 1461492722U;
unsigned short var_20 = (unsigned short)32017;
unsigned short var_21 = (unsigned short)50049;
signed char var_22 = (signed char)109;
int var_23 = -2097331692;
unsigned int arr_5 [16] [16] ;
long long int arr_6 [16] ;
int arr_9 [16] ;
signed char arr_13 [12] [12] ;
unsigned char arr_14 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 4092373908U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -4678340613475980977LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 1724418683;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (unsigned char)63;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
