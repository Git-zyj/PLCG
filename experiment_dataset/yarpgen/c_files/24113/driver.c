#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
short var_1 = (short)-10962;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)101;
unsigned char var_5 = (unsigned char)45;
short var_6 = (short)-12744;
signed char var_7 = (signed char)-3;
unsigned long long int var_8 = 16400252010931088293ULL;
unsigned char var_9 = (unsigned char)24;
short var_10 = (short)22851;
unsigned int var_11 = 3883872646U;
short var_12 = (short)-12073;
long long int var_15 = 3066267255593415471LL;
short var_16 = (short)12662;
int var_18 = -2084750467;
int zero = 0;
unsigned int var_20 = 2328453934U;
unsigned char var_21 = (unsigned char)44;
unsigned long long int var_22 = 9744455541327341293ULL;
int var_23 = 1510915757;
unsigned long long int var_24 = 4088639727980539190ULL;
_Bool arr_0 [15] [15] ;
short arr_5 [16] ;
long long int arr_6 [16] ;
unsigned long long int arr_12 [16] [16] ;
unsigned long long int arr_2 [15] ;
unsigned char arr_7 [16] ;
signed char arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)-45;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 4742922278341781055LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 17652192435208493815ULL : 9236895373147096385ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 7192494378169898784ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)136 : (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-34 : (signed char)120;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
