#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)6;
unsigned int var_5 = 232905670U;
unsigned long long int var_11 = 9631148689648051898ULL;
unsigned char var_12 = (unsigned char)30;
unsigned long long int var_13 = 3889941407969678115ULL;
unsigned short var_15 = (unsigned short)19197;
int zero = 0;
unsigned short var_16 = (unsigned short)35514;
unsigned char var_17 = (unsigned char)154;
short var_18 = (short)3464;
unsigned long long int var_19 = 12308333694288794798ULL;
unsigned char var_20 = (unsigned char)194;
unsigned char var_21 = (unsigned char)155;
unsigned short var_22 = (unsigned short)50773;
unsigned short var_23 = (unsigned short)4201;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)169;
unsigned long long int arr_2 [15] ;
unsigned long long int arr_3 [15] [15] ;
unsigned short arr_4 [15] ;
unsigned short arr_9 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1658833003115744185ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 15232409153510641848ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)8352;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)54904;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
