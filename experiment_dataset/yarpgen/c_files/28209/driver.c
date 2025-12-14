#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12374470645485699571ULL;
short var_1 = (short)3437;
unsigned long long int var_2 = 5638701826286561826ULL;
unsigned char var_3 = (unsigned char)235;
unsigned char var_5 = (unsigned char)73;
unsigned short var_6 = (unsigned short)11552;
unsigned short var_7 = (unsigned short)47665;
long long int var_9 = -1661845197225942007LL;
unsigned long long int var_11 = 10383075187184985932ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 12157536576967492908ULL;
short var_15 = (short)-23442;
short var_16 = (short)-31590;
int zero = 0;
unsigned short var_18 = (unsigned short)2817;
unsigned long long int var_19 = 11277430044025942406ULL;
short var_20 = (short)-32092;
unsigned long long int var_21 = 2545419813762139553ULL;
short var_22 = (short)-10063;
signed char var_23 = (signed char)-114;
unsigned long long int var_24 = 18051049073874816012ULL;
unsigned char arr_0 [22] [22] ;
short arr_1 [22] ;
short arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)117 : (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)26332;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-27504 : (short)-2252;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
