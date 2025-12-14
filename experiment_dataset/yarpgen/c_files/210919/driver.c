#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7137241962899610345ULL;
unsigned int var_2 = 524280604U;
unsigned long long int var_3 = 18012100433645055061ULL;
int var_5 = 1063070434;
unsigned char var_6 = (unsigned char)55;
unsigned char var_7 = (unsigned char)194;
int var_8 = 1602935547;
unsigned int var_9 = 3155943117U;
long long int var_11 = -7005480017423620793LL;
unsigned long long int var_12 = 15817852193476365617ULL;
signed char var_13 = (signed char)93;
int zero = 0;
signed char var_14 = (signed char)112;
unsigned char var_15 = (unsigned char)75;
long long int var_16 = -5253823327556742698LL;
short var_17 = (short)26496;
unsigned char var_18 = (unsigned char)210;
unsigned char var_19 = (unsigned char)59;
unsigned long long int var_20 = 17988387306192219066ULL;
unsigned long long int arr_1 [16] ;
unsigned short arr_2 [16] ;
unsigned char arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 18175714515699563026ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)26137;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)254;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
