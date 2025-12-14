#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 511496206;
unsigned int var_1 = 3258533246U;
int var_2 = -318688623;
unsigned int var_5 = 1655256U;
int var_6 = -1277197409;
int var_8 = -1254806440;
int var_9 = -992206150;
unsigned short var_11 = (unsigned short)45081;
unsigned char var_13 = (unsigned char)84;
int var_14 = 1307598231;
_Bool var_15 = (_Bool)0;
int var_16 = -1998342686;
int zero = 0;
long long int var_18 = 717087342353114069LL;
unsigned int var_19 = 315053504U;
long long int var_20 = -1111087494836636954LL;
unsigned char var_21 = (unsigned char)230;
unsigned char var_22 = (unsigned char)157;
signed char arr_0 [16] [16] ;
unsigned char arr_2 [16] ;
long long int arr_3 [16] [16] ;
unsigned short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 6868163053726841054LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)57836;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
