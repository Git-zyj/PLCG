#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -244087895657918359LL;
unsigned long long int var_3 = 16342499419613810339ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 2683444545U;
short var_8 = (short)17902;
unsigned long long int var_9 = 4313820250395967440ULL;
unsigned int var_10 = 2905265377U;
int var_11 = 570610818;
unsigned short var_12 = (unsigned short)60484;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3972841200866920020LL;
long long int var_19 = 6045371571928727582LL;
short var_20 = (short)17605;
short arr_0 [13] ;
unsigned int arr_1 [13] [13] ;
unsigned int arr_2 [13] [13] ;
int arr_3 [13] ;
short arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)32601 : (short)-11451;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 3400602314U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 1449811491U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -1001780589;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-145 : (short)13127;
}

void checksum() {
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
