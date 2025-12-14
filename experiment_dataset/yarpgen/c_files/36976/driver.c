#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 920529858;
long long int var_1 = 5112880932912070552LL;
short var_3 = (short)-3895;
unsigned char var_4 = (unsigned char)180;
short var_5 = (short)14666;
long long int var_6 = -7943523908945497965LL;
short var_8 = (short)-10620;
unsigned char var_10 = (unsigned char)247;
short var_11 = (short)-21977;
signed char var_12 = (signed char)53;
int zero = 0;
unsigned char var_13 = (unsigned char)39;
unsigned short var_14 = (unsigned short)2073;
unsigned short var_15 = (unsigned short)55347;
unsigned char var_16 = (unsigned char)244;
long long int var_17 = 8857355084037489101LL;
short var_18 = (short)-4242;
unsigned short var_19 = (unsigned short)1973;
unsigned char var_20 = (unsigned char)13;
long long int var_21 = -3503056989643602428LL;
unsigned char var_22 = (unsigned char)149;
signed char arr_1 [21] [21] ;
unsigned short arr_4 [21] ;
short arr_5 [21] [21] ;
int arr_6 [21] [21] [21] [21] ;
short arr_10 [21] ;
unsigned int arr_11 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)12557;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-15520;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1212317959 : -295100213;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (short)17096;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2043401645U : 3888388051U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
