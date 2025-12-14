#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)67;
unsigned long long int var_2 = 543263074331191414ULL;
short var_5 = (short)-2460;
_Bool var_6 = (_Bool)1;
int var_8 = -1705795465;
unsigned long long int var_9 = 2683074170271433242ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_15 = 1980720199;
int var_16 = 1723723862;
_Bool var_17 = (_Bool)1;
short var_18 = (short)5979;
short var_19 = (short)19027;
unsigned int var_20 = 1355011405U;
signed char arr_0 [11] ;
unsigned char arr_1 [11] [11] ;
unsigned long long int arr_2 [25] ;
long long int arr_3 [25] ;
short arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2195681325598128492ULL : 4407596296548053493ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 9119781366560770115LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-16763 : (short)-10898;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
