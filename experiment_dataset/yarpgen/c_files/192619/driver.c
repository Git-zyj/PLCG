#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)232;
unsigned char var_3 = (unsigned char)202;
int var_4 = -1887147665;
signed char var_6 = (signed char)-2;
long long int var_7 = -4293262536779188548LL;
unsigned char var_9 = (unsigned char)81;
short var_10 = (short)17291;
unsigned char var_11 = (unsigned char)208;
unsigned short var_12 = (unsigned short)55108;
unsigned char var_13 = (unsigned char)243;
int zero = 0;
int var_14 = -1080312766;
short var_15 = (short)4768;
unsigned int var_16 = 3747658621U;
unsigned long long int var_17 = 134527391136304558ULL;
unsigned char var_18 = (unsigned char)67;
unsigned char var_19 = (unsigned char)94;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-19836;
unsigned int var_22 = 1368715005U;
unsigned short arr_0 [16] ;
unsigned char arr_2 [16] [16] ;
unsigned char arr_5 [11] ;
unsigned long long int arr_6 [11] ;
_Bool arr_9 [20] ;
_Bool arr_10 [20] ;
unsigned char arr_11 [20] ;
unsigned int arr_3 [16] ;
short arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41019 : (unsigned short)47440;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 4243851026767726802ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3996997626U : 2774005438U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (short)-9963;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
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
