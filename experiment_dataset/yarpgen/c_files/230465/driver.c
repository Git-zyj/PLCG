#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 647863300U;
long long int var_3 = -6983093390860677013LL;
long long int var_4 = -6405762001326523120LL;
short var_6 = (short)-10953;
signed char var_10 = (signed char)-41;
unsigned short var_14 = (unsigned short)52895;
unsigned long long int var_15 = 8680730906395208465ULL;
int var_17 = 1028520996;
int zero = 0;
int var_20 = 1938235279;
unsigned char var_21 = (unsigned char)233;
_Bool var_22 = (_Bool)0;
long long int var_23 = -5211775074802134937LL;
unsigned short var_24 = (unsigned short)59264;
unsigned int var_25 = 841815949U;
short var_26 = (short)20649;
unsigned char var_27 = (unsigned char)68;
unsigned char arr_0 [12] ;
long long int arr_1 [12] ;
unsigned long long int arr_3 [12] [12] ;
unsigned long long int arr_2 [12] [12] ;
unsigned char arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)45 : (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -3261882525191644251LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 12856117524060653802ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 4419117141651088306ULL : 645078326548271734ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)248;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
