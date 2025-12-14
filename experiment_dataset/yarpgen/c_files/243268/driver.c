#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)45;
signed char var_9 = (signed char)92;
unsigned long long int var_10 = 4271595105533577662ULL;
long long int var_11 = -5789888924730919010LL;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 3891435212U;
unsigned long long int var_16 = 5143021425582738164ULL;
long long int var_18 = -2322168477066300913LL;
int zero = 0;
unsigned int var_20 = 512764542U;
unsigned char var_21 = (unsigned char)74;
unsigned long long int var_22 = 14913320008846804688ULL;
unsigned int var_23 = 3289169848U;
long long int arr_0 [17] ;
signed char arr_1 [17] ;
int arr_2 [17] ;
unsigned char arr_3 [17] ;
signed char arr_4 [17] ;
signed char arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 5372759294958261954LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 319017880;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)43;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
