#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-22172;
unsigned long long int var_4 = 3627260131875034528ULL;
unsigned int var_5 = 2759647578U;
unsigned char var_6 = (unsigned char)164;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 902382001U;
unsigned char var_11 = (unsigned char)50;
int zero = 0;
unsigned long long int var_12 = 5486486824102281631ULL;
unsigned short var_13 = (unsigned short)53005;
unsigned int var_14 = 1607859306U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2221853265U;
unsigned long long int var_17 = 15001671530505360367ULL;
short var_18 = (short)18499;
unsigned short arr_3 [17] ;
unsigned char arr_8 [23] ;
_Bool arr_12 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)54115;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)129 : (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
