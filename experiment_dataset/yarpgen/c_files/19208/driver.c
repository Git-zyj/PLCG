#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 312486725U;
long long int var_1 = -6978873539403654267LL;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)8;
unsigned short var_7 = (unsigned short)20063;
signed char var_8 = (signed char)-108;
unsigned short var_10 = (unsigned short)63441;
int zero = 0;
long long int var_13 = 1782630242072390517LL;
long long int var_14 = -5628509431298805922LL;
unsigned long long int var_15 = 7049174757652127204ULL;
unsigned long long int var_16 = 10734876902138895182ULL;
int var_17 = 1616237286;
signed char var_18 = (signed char)-62;
signed char var_19 = (signed char)-99;
long long int var_20 = -167946165549510754LL;
unsigned int var_21 = 1307909211U;
long long int arr_0 [24] ;
unsigned int arr_2 [24] [24] [24] ;
unsigned short arr_3 [24] [24] [24] ;
short arr_4 [24] [24] ;
unsigned short arr_5 [24] [24] [24] [24] ;
unsigned short arr_6 [24] [24] ;
unsigned char arr_9 [24] ;
unsigned short arr_10 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -41685112634343231LL : -2214882714561253341LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 66941681U : 3421796595U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)2270 : (unsigned short)12262;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)8810 : (short)16409;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)55304 : (unsigned short)50541;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)24739 : (unsigned short)7022;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)234 : (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)44539 : (unsigned short)23002;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
