#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -852581931;
unsigned short var_2 = (unsigned short)15104;
short var_4 = (short)16108;
short var_5 = (short)26000;
unsigned int var_7 = 4150130877U;
long long int var_10 = -3068697950653924505LL;
int var_12 = 1293047980;
short var_13 = (short)-27186;
unsigned char var_17 = (unsigned char)190;
int zero = 0;
signed char var_18 = (signed char)-56;
int var_19 = -2074681488;
short var_20 = (short)17581;
_Bool var_21 = (_Bool)0;
int var_22 = 1266933333;
unsigned char arr_0 [11] ;
int arr_1 [11] ;
_Bool arr_2 [11] [11] ;
long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -830729485;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 5631329144270293412LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
