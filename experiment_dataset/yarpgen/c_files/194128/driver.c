#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 951594349;
short var_6 = (short)7584;
long long int var_9 = 9188132839653104446LL;
long long int var_10 = -5965459841212993321LL;
unsigned char var_11 = (unsigned char)5;
int zero = 0;
short var_12 = (short)-22415;
unsigned int var_13 = 4040942959U;
unsigned char var_14 = (unsigned char)105;
unsigned long long int var_15 = 1668541061980799938ULL;
unsigned int var_16 = 3973205392U;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)232;
unsigned long long int arr_1 [14] ;
unsigned char arr_4 [25] ;
unsigned long long int arr_5 [25] [25] ;
long long int arr_3 [14] [14] ;
unsigned short arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 8878624842254945537ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 11567469236819834429ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = -3684407243359256422LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17280 : (unsigned short)33946;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
